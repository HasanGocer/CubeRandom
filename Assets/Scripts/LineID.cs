using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineID : MonoBehaviour
{

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Line"))
        {
            GetComponent<Draw>().EndTouch(false);
        }
        else if (other.CompareTag("Object"))
        {
            if (other.GetComponent<ObjectID>().objectID != LineManager.Instance.ID)
                GetComponent<Draw>().EndTouch(false);
        }
    }

    public void RePlacement()
    {
        LineManager lineManager = LineManager.Instance;
        GameObject firstObject = lineManager.Objects[lineManager.Objects.Count - 1];
        GameObject secondObject = lineManager.Objects[lineManager.Objects.Count - 2];
        this.transform.localScale = new Vector3(Vector3.Distance(firstObject.transform.position, secondObject.transform.position), 0.2f, 0.2f);

        if ((secondObject.transform.position.x - firstObject.transform.position.x > 0 && secondObject.transform.position.y - firstObject.transform.position.y > 0) || (secondObject.transform.position.x - firstObject.transform.position.x < 0 && secondObject.transform.position.y - firstObject.transform.position.y < 0))
            this.transform.rotation = Quaternion.Euler(new Vector3(0, Mathf.Atan((secondObject.transform.position.x - firstObject.transform.position.x) / (secondObject.transform.position.y - firstObject.transform.position.y)), 0));
        else
            this.transform.rotation = Quaternion.Euler(new Vector3(0, Mathf.Atan((secondObject.transform.position.x - firstObject.transform.position.x) / (secondObject.transform.position.y - firstObject.transform.position.y)) + 180, 0));
    }
}
