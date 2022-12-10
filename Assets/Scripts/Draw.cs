using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody), typeof(LineRenderer))]

public class Draw : MonoBehaviour
{
    [SerializeField] private int _OPLineCount;
    LineRenderer lr;
    public float timeForNextRay;
    float timer = 0;
    int wayIndex;
    bool touchPlane;
    bool touchStartedOnPlayer;

    public List<GameObject> LineObjects = new List<GameObject>();

    void Start()
    {
        lr = GetComponent<LineRenderer>();
        lr.enabled = false;
        wayIndex = 1;
        touchStartedOnPlayer = false;
    }

    private void OnMouseDown()
    {
        lr.enabled = true;
        touchStartedOnPlayer = true;
        lr.positionCount = 1;
        lr.SetPosition(0, transform.position);
    }

    private void Update()
    {
        timer += Time.deltaTime;
        if (Input.GetMouseButton(0) && timer > timeForNextRay && touchStartedOnPlayer)
        {
            Vector3 worldFromMousePos = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, 100));
            Vector3 direction = worldFromMousePos - Camera.main.transform.position;
            RaycastHit hit;
            if (Physics.Raycast(Camera.main.transform.position, direction, out hit, 100f))
            {
                touchPlane = true;
                GameObject newWayPoint = ObjectPool.Instance.GetPooledObject(_OPLineCount);
                LineObjects.Add(newWayPoint);
                newWayPoint.transform.position = new Vector3(hit.point.x, transform.position.y, hit.point.z);
                lr.positionCount = wayIndex + 1;
                lr.SetPosition(wayIndex, newWayPoint.transform.position);
                timer = 0;
            }
        }

        if (Input.GetMouseButtonUp(0) && touchPlane == true)
        {
            for (int i = 0; i < LineObjects.Count; i++)
            {
                ObjectPool.Instance.AddObject(_OPLineCount, LineObjects[i]);
                LineObjects.RemoveAt(i);
            }
            touchStartedOnPlayer = false;
            lr.enabled = false;
        }
    }
}
