using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody), typeof(LineRenderer))]

public class Draw : MonoBehaviour
{
    [SerializeField] private GameObject lineStartPos;
    LineRenderer lr;
    public float timeForNextRay;
    float timer = 0;
    public int wayIndex;
    public bool touchStartedOnPlayer;
    public bool drawLine;
    public bool oneTap;
    Touch touch;

    public List<GameObject> LineObjects = new List<GameObject>();

    void Start()
    {
        lr = GetComponent<LineRenderer>();
        lr.enabled = false;
        wayIndex = 1;
        touchStartedOnPlayer = false;
        oneTap = true;
    }

    private void OnMouseDown()
    {
        if (oneTap)
            if (oneTap)
            {
                oneTap = false;
                lr.enabled = true;
                touchStartedOnPlayer = true;
                lr.positionCount = 3;
                lr.SetPosition(0, lineStartPos.transform.position);
                lr.SetPosition(1, lineStartPos.transform.position);
                lr.SetPosition(2, lineStartPos.transform.position);
                drawLine = true;
                StartCoroutine(StartDraw());
            }
    }

    private IEnumerator StartDraw()
    {
        while (touchStartedOnPlayer && !oneTap)
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
                                if (drawLine)
                                {
                                    drawLine = false;
                                    DrawLine();
                                }
                                lr.SetPosition(wayIndex, new Vector3(newWayPoint.transform.position.x, newWayPoint.transform.position.y + 1, newWayPoint.transform.position.z));
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
        oneTap = true;
    }

    public void DrawLine()
    {
        wayIndex++;
        lr.positionCount = wayIndex + 1;
    }

    public void LineRendererCanceled()
    {
        lr.positionCount = 3;
        lr.SetPosition(0, lineStartPos.transform.position);
        lr.SetPosition(1, lineStartPos.transform.position);
        lr.SetPosition(2, lineStartPos.transform.position);
        lr.enabled = false;
    }
}
