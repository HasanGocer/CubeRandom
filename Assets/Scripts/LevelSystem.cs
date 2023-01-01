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
        ItemData �temData = ItemData.Instance;
        ItemData.Field factor = �temData.factor;
        if (gameManager.level >= ObjectCountMod * factor.ObjectTypeCount)
        {
            �temData.SetBarHealth();
            �temData.SetObjectTypeCount();
            newObjectTime = true;
        }
        if (gameManager.level >= randomCountMod * factor.objectCount)
            �temData.SetObjectCount();
        if (gameManager.level >= rivalMaxPowerMod * factor.rivalMaxPower)
            �temData.SetRivalMaxPower();
    }
}
