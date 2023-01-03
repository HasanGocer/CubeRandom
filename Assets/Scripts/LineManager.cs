using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineManager : MonoSingleton<LineManager>
{
    public int ID = -1;
    public List<GameObject> Objects = new List<GameObject>();
    public List<GameObject> LineGOs = new List<GameObject>();
    public bool isFree;

    public void LineCanceled(int ID, List<GameObject> Objects)
    {
        if (Objects.Count >= 0)
        {
            int limit = Objects.Count - 1;
            print(limit);
            Objects[0].GetComponent<Draw>().LineRendererCanceled();
            for (int i = limit; i >= 0; i--)
            {
                Objects[i].gameObject.layer = default;
                Objects[i].GetComponent<LineTouch>().addedLineManger = false;
            }
            Objects.Clear();
            this.ID = -1;
        }
    }

    public void CubesBlast()
    {
        CheckObject();
        int limit = Objects.Count;
        StartCoroutine(AnimControl.Instance.CallHitPlayer(ID % 4, ID * limit));
        FightBarSystem.Instance.PlayerScoreAdd(ID * limit);
        GameManager.Instance.addedMoney += ID * limit * 3;
        Vibration.Vibrate(30);
        for (int i = limit - 1; i >= 0; i--)
        {
            Objects[i].GetComponent<Draw>().LineRendererCanceled();
            Objects[i].gameObject.layer = default;
            ObjectID objectID = Objects[i].GetComponent<ObjectID>();
            RandomSystem.Instance.ObjectGrid[objectID.lineCount, objectID.ColumnCount] = false;
            Objects[i].GetComponent<LineTouch>().addedLineManger = false;
            RandomSystem.Instance.ObjectPoolAdd(Objects[i], RandomSystem.Instance.ObjectList, ID);
        }
        Objects.Clear();
        ID = -1;
    }

    public void LineFinish(bool isTrueFinish)
    {
        LineGOsDelete();
        if (Objects.Count >= 3 && isTrueFinish)
        {
            if (Objects.Count >= 4)
                StartCoroutine(ParticalSystem.Instance.ForthObjectPartical(Objects[0].gameObject, Objects.Count));
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

    private void LineGOsDelete()
    {
        int limit = LineGOs.Count - 1;
        for (int i = limit; i >= 0; i--)
        {
            LineGOs[i].SetActive(false);
        }
        LineGOs.Clear();
    }
}
