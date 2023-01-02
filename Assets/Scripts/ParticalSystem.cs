using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticalSystem : MonoSingleton<ParticalSystem>
{
    [SerializeField] private int _OPforthParticalCount, _OPfinishParticalCount, _OPNewObjectParticalCount, _OPHitCharacterParticalCount;
    [SerializeField] private GameObject FinishParticalPos;
    [SerializeField] private GameObject comboUI;
    [SerializeField] private GameObject rivalHead, mainHead;

    public IEnumerator NewObjectPartical()
    {
        for (int i = 0; i < 5; i++)
        {
            GameObject part = ObjectPool.Instance.GetPooledObject(_OPNewObjectParticalCount);
            part.transform.position = FinishParticalPos.transform.position;
            yield return new WaitForSeconds(0.2f);
        }
    }

    public IEnumerator CallHitCharacter(bool hitMain, int count)
    {
        GameObject part = ObjectPool.Instance.GetPooledObject(_OPHitCharacterParticalCount);
        if (hitMain)
        {
            StartCoroutine(PointText.Instance.CallPointText(rivalHead, count));
            part.transform.position = rivalHead.transform.position;
        }
        else
        {
            StartCoroutine(PointText.Instance.CallPointText(mainHead, count));
            part.transform.position = mainHead.transform.position;
        }
        yield return new WaitForSeconds(0.3f);
        ObjectPool.Instance.AddObject(_OPHitCharacterParticalCount, part);
    }

    public IEnumerator ForthObjectPartical(GameObject pos)
    {
        GameObject part = ObjectPool.Instance.GetPooledObject(_OPforthParticalCount);
        part.transform.position = pos.transform.position;
        comboUI.SetActive(true);
        yield return new WaitForSeconds(3);
        comboUI.SetActive(false);
        ObjectPool.Instance.AddObject(_OPforthParticalCount, part);
    }

    public IEnumerator FinishTimePartical()
    {
        for (int i = 0; i < 7; i++)
        {
            GameObject part = ObjectPool.Instance.GetPooledObject(_OPfinishParticalCount);
            part.transform.position = FinishParticalPos.transform.position;
            yield return new WaitForSeconds(0.2f);
        }
    }
}
