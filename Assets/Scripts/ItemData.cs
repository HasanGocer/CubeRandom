using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemData : MonoSingleton<ItemData>
{
    //managerde bulunacak

    [System.Serializable]
    public class Field
    {
        public int objectCount, ObjectTypeCount, rivalMaxPower, barHealth;
    }

    public Field field;
    public Field standart;
    public Field factor;
    public Field constant;

    public void IDAwake()
    {
        field.objectCount = standart.objectCount + (factor.objectCount * constant.objectCount);
        field.ObjectTypeCount = standart.ObjectTypeCount + (factor.ObjectTypeCount * constant.ObjectTypeCount);
        field.rivalMaxPower = standart.rivalMaxPower + (factor.rivalMaxPower * constant.rivalMaxPower);
        FightBarSystem.Instance.rivalMaxHit = field.rivalMaxPower;
        field.barHealth = standart.barHealth + (factor.barHealth * constant.barHealth);
    }

    public void SetObjectTypeCount()
    {
        factor.ObjectTypeCount++;
        field.ObjectTypeCount = standart.ObjectTypeCount + (factor.ObjectTypeCount * constant.ObjectTypeCount);
        GameManager.Instance.FactorPlacementWrite(ItemData.Instance.factor);
    }

    public void SetObjectCount()
    {
        factor.objectCount++;
        field.objectCount = standart.objectCount + (factor.objectCount * constant.objectCount);
        GameManager.Instance.FactorPlacementWrite(ItemData.Instance.factor);
    }

    public void SetRivalMaxPower()
    {
        factor.rivalMaxPower++;
        field.rivalMaxPower = standart.rivalMaxPower + (factor.rivalMaxPower * constant.rivalMaxPower);
        GameManager.Instance.FactorPlacementWrite(ItemData.Instance.factor);
    }

    public void SetBarHealth()
    {
        factor.barHealth++;
        field.barHealth = standart.barHealth + (factor.barHealth * constant.barHealth);
        GameManager.Instance.FactorPlacementWrite(ItemData.Instance.factor);
    }
}
