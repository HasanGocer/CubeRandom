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

    public void CubesBlast()
    {
        CheckObject();
        ID = -1;
        int limit = Objects.Count;
        for (int i = limit - 1; i >= 0; i--)
        {
            RandomSystem.Instance.ObjectPoolAdd(Objects[i], RandomSystem.Instance.ObjectList);
            Objects.RemoveAt(i);
            //partical
        }
        FinishSystem.Instance.CheckCount();
    }

    public void LineFinish()
    {
        if (Objects.Count >= 3)
        {
            CubesBlast();
        }
        else
        {
            LineCanceled(ID, Objects);
        }
    }

    public void CheckObject()
    {
        RandomSystem randomSystem = RandomSystem.Instance;
        for (int i = 0; i < randomSystem.ObjectTypeInt.Count; i++)
        {
            if (ID == randomSystem.ObjectTypeInt[i])
                randomSystem.ObjectCountInt[i] -= Objects.Count;
        }
    }
}
