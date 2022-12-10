using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;

public class PointText : MonoSingleton<PointText>
{
    public int OPPointTextInt;
    public float textMoveTime;
    public float countTextJumpDistance;
    public Ease moveEaseType;

    public IEnumerator CallPointText(GameObject Pos, int OPPointTextInt, int intCount, int moneyJumpDistance, Ease moveEaseType, float countTextJumpDistance, float textMoveTime)
    {
        GameObject obj = ObjectPool.Instance.GetPooledObject(OPPointTextInt);
        obj.GetComponent<TMP_Text>().text = intCount.ToString();
        obj.transform.position = Pos.transform.position;
        obj.transform.DOMove(new Vector3(Pos.transform.position.x, Pos.transform.position.y + countTextJumpDistance, Pos.transform.position.z), textMoveTime).SetEase(moveEaseType);
        yield return new WaitForSeconds(textMoveTime);
        ObjectPool.Instance.AddObject(OPPointTextInt, obj);
    }
}
