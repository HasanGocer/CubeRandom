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
            StartCoroutine(PointText.Instance.CallPointText(rivalHead.transform.position, count));
            part.transform.position = new Vector3(rivalHead.transform.position.x, rivalHead.transform.position.y, rivalHead.transform.position.z + 0.4f);
        }
        else
        {
            StartCoroutine(PointText.Instance.CallPointText(mainHead.transform.position, count));
            part.transform.position = new Vector3(mainHead.transform.position.x, mainHead.transform.position.y, mainHead.transform.position.z + 0.4f);
        }
        yield return new WaitForSeconds(0.3f);
        ObjectPool.Instance.AddObject(_OPHitCharacterParticalCount, part);
    }

    public IEnumerator ForthObjectPartical(List<GameObject> pos, int count)
    {
        if (count >= 8)
            comboUI.SetActive(true);
        for (int i = 0; i < pos.Count; i++)
        {
            GameObject part = ObjectPool.Instance.GetPooledObject(_OPforthParticalCount);
            part.transform.position = pos[i].transform.position;
            yield return new WaitForSeconds(0.2f);
            ObjectPool.Instance.AddObject(_OPforthParticalCount, part);
        }
        if (count >= 8)
            comboUI.SetActive(false);

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

    public void ComboSetActiveFalse()
    {
        comboUI.SetActive(false);
    }
}
