using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelSystem : MonoSingleton<LevelSystem>
{
    [SerializeField] private int randomCountMod, ObjectCountMod, rivalMaxPowerMod;
    public bool newObjectTime = false;

    public void NewLevelCheckField()
    {
        GameManager gameManager = GameManager.Instance;
        ItemData ýtemData = ItemData.Instance;
        ItemData.Field factor = ýtemData.factor;
        if (gameManager.level >= ObjectCountMod * factor.ObjectTypeCount)
        {
            ýtemData.SetBarHealth();
            ýtemData.SetObjectTypeCount();
            newObjectTime = true;
        }
        if (gameManager.level >= randomCountMod * factor.objectCount)
            ýtemData.SetObjectCount();
        if (gameManager.level >= rivalMaxPowerMod * factor.rivalMaxPower)
            ýtemData.SetRivalMaxPower();
    }
}
