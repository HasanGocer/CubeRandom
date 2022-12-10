using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineManager : MonoSingleton<LineManager>
{
    public int ID = -1;
    public List<GameObject> Objects = new List<GameObject>();

    public void LineCanceled(int ID, List<GameObject> Objects)
    {
        for (int i = 0; i < Objects.Count; i++)
        {
            Objects[i].GetComponent<LineTouch>().addedLineManger = false;
            Objects.RemoveAt(i);
        }
        ID = -1;
    }
}
