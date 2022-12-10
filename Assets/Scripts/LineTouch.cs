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
            }
            else if (lineManager.ID == GetComponent<ObjectID>().objectID && !addedLineManger)
            {
                lineManager.Objects.Add(this.gameObject);
                addedLineManger = true;
            }
            else if (lineManager.ID != GetComponent<ObjectID>().objectID && !addedLineManger)
            {
                //iptal
            }
        }
    }
}
