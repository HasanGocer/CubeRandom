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
    public int wayIndex;
    public bool touchStartedOnPlayer;
    Touch touch;

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
        StartCoroutine(StartDraw());
    }

    private IEnumerator StartDraw()
    {
        while (touchStartedOnPlayer)
        {
            timer += Time.deltaTime;
            if (Input.touchCount > 0 && GameManager.Instance.isStart)
            {
                touch = Input.GetTouch(0);
                switch (touch.phase)
                {
                    case TouchPhase.Moved:
                        if (timer > timeForNextRay && touchStartedOnPlayer)
                        {
                            Vector3 worldFromMousePos = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, 100));
                            Vector3 direction = worldFromMousePos - Camera.main.transform.position;
                            RaycastHit hit;
                            if (Physics.Raycast(Camera.main.transform.position, direction, out hit, 100f))
                            {
                                GameObject newWayPoint = new GameObject("WayPoint");
                                newWayPoint.tag = "Line";
                                BoxCollider boxCollider = newWayPoint.AddComponent<BoxCollider>();
                                boxCollider.isTrigger = true;
                                boxCollider.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
                                LineObjects.Add(newWayPoint);
                                newWayPoint.transform.position = new Vector3(hit.point.x, transform.position.y, hit.point.z);
                                timer = 0;
                            }
                        }
                        break;
                    case TouchPhase.Ended:
                        EndTouch(true);
                        break;
                }
            }
            yield return new WaitForEndOfFrame();
        }

    }

    public void EndTouch(bool isTrueFinish)
    {
        LineManager.Instance.LineFinish(isTrueFinish);
        int limit = LineObjects.Count - 1;
        for (int i = limit; i >= 0; i--)
        {
            LineObjects[i].SetActive(false);
            LineObjects.RemoveAt(i);
        }
        touchStartedOnPlayer = false;
        lr.enabled = false;
    }
}
