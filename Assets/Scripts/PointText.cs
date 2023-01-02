using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;

public class PointText : MonoSingleton<PointText>
{
    [SerializeField] private int _OPPointTextInt;

    public IEnumerator CallPointText(GameObject Pos, int intCount, float textMoveTime = 1, float countTextJumpDistance = 2, Ease moveEaseType = Ease.OutBounce)
    {
        GameObject obj = ObjectPool.Instance.GetPooledObject(_OPPointTextInt);
        obj.GetComponent<TMP_Text>().text = intCount.ToString();
        obj.transform.position = Pos.transform.position;
        obj.transform.DOMove(new Vector3(Pos.transform.position.x, Pos.transform.position.y + countTextJumpDistance, Pos.transform.position.z), textMoveTime).SetEase(moveEaseType);
        yield return new WaitForSeconds(textMoveTime);
        ObjectPool.Instance.AddObject(_OPPointTextInt, obj);
    }
}
