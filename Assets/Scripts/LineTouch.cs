using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineTouch : MonoBehaviour
{
    public bool addedLineManger;
    [SerializeField] private int _OPLineCount;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Line") && !addedLineManger)
        {
            RandomSystem.Instance.ObjectShake(this.gameObject);

            LineManager lineManager = LineManager.Instance;
            if (lineManager.ID == -1 && !addedLineManger)
            {
                lineManager.ID = GetComponent<ObjectID>().objectID;
                lineManager.Objects.Add(this.gameObject);
                addedLineManger = true;

                LineRenderer lr = lineManager.Objects[0].GetComponent<LineRenderer>();
                Draw draw = lineManager.Objects[0].GetComponent<Draw>();

                GameObject objpos = lineManager.Objects[lineManager.Objects.Count - 1];
                lr.SetPosition(draw.wayIndex, new Vector3(objpos.transform.position.x, objpos.transform.position.y + 1, objpos.transform.position.z));
                draw.wayIndex++;
                lr.positionCount = draw.wayIndex + 1;
                lr.SetPosition(draw.wayIndex, new Vector3(objpos.transform.position.x, objpos.transform.position.y + 1, objpos.transform.position.z));
            }
            else if (lineManager.ID == GetComponent<ObjectID>().objectID && !addedLineManger)
            {
                lineManager.Objects.Add(this.gameObject);
                addedLineManger = true;
                LineRenderer lr = lineManager.Objects[0].GetComponent<LineRenderer>();
                Draw draw = lineManager.Objects[0].GetComponent<Draw>();

                GameObject objpos = lineManager.Objects[lineManager.Objects.Count - 1];
                GameObject lineGO = ObjectPool.Instance.GetPooledObject(_OPLineCount);
                lineGO.GetComponent<LineID>().RePlacement();
                lr.SetPosition(draw.wayIndex, new Vector3(objpos.transform.position.x, objpos.transform.position.y + 1, objpos.transform.position.z));
                draw.wayIndex++;
                lr.positionCount = draw.wayIndex + 1;
                lr.SetPosition(draw.wayIndex, new Vector3(objpos.transform.position.x, objpos.transform.position.y + 1, objpos.transform.position.z));
            }
            else if (lineManager.ID != GetComponent<ObjectID>().objectID && !addedLineManger)
            {
                Draw draw = lineManager.Objects[0].GetComponent<Draw>();
                draw.oneTap = true;
                draw.EndTouch(false);
                lineManager.LineCanceled(lineManager.ID, lineManager.Objects);
            }
        }
    }
}
