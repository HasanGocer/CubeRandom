using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelSystem : MonoSingleton<LevelSystem>
{
    [SerializeField] private int randomCountMod, ObjectCountMod;

    public void NewLevelCheckField()
    {
        if (GameManager.Instance.level >= randomCountMod * ItemData.Instance.factor.ObjectTypeCount)
            ItemData.Instance.SetObjectTypeCount();
        if (GameManager.Instance.level >= ObjectCountMod * ItemData.Instance.factor.objectCount)
            ItemData.Instance.SetObjectCount();
    }
}
