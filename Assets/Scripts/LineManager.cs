using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineManager : MonoSingleton<LineManager>
{
    public int ID = -1;
    public List<GameObject> Objects = new List<GameObject>();

    public void LineCanceled(int ID, List<GameObject> Objects)
    {
        int limit = Objects.Count - 1;
        for (int i = limit; i >= 0; i--)
        {
            Objects[i].GetComponent<LineTouch>().addedLineManger = false;
            Objects.RemoveAt(i);
        }
        this.ID = -1;
    }

    public void CubesBlast()
    {
        CheckObject();
        int limit = Objects.Count;
        for (int i = limit - 1; i >= 0; i--)
        {
            RandomSystem.Instance.ObjectPoolAdd(Objects[i], RandomSystem.Instance.ObjectList, ID);
            Objects.RemoveAt(i);
            //partical
        }
        ID = -1;
    }

    public void LineFinish(bool isTrueFinish)
    {
        if (Objects.Count >= 3 && isTrueFinish)
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
