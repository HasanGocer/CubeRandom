using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineTouch : MonoBehaviour
{
    public bool addedLineManger;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Line") && !addedLineManger)
        {

            LineManager lineManager = LineManager.Instance;
            if (lineManager.ID == -1 && !addedLineManger)
            {
                lineManager.ID = GetComponent<ObjectID>().objectID;
                lineManager.Objects.Add(this.gameObject);
                addedLineManger = true;

                LineRenderer lr = lineManager.Objects[0].GetComponent<LineRenderer>();
                Draw draw = lineManager.Objects[0].GetComponent<Draw>();

                lr.positionCount = draw.wayIndex + 1;
                lr.SetPosition(draw.wayIndex, lineManager.Objects[0].transform.position);
                draw.wayIndex++;
            }
            else if (lineManager.ID == GetComponent<ObjectID>().objectID && !addedLineManger)
            {
                lineManager.Objects.Add(this.gameObject);
                addedLineManger = true;
                LineRenderer lr = lineManager.Objects[0].GetComponent<LineRenderer>();
                Draw draw = lineManager.Objects[0].GetComponent<Draw>();

                lr.positionCount = draw.wayIndex + 1;
                lr.SetPosition(draw.wayIndex, other.transform.position);
                draw.wayIndex++;
            }
            else if (lineManager.ID != GetComponent<ObjectID>().objectID && !addedLineManger)
            {
                lineManager.LineCanceled(lineManager.ID, lineManager.Objects);
            }
        }
    }
}
