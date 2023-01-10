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
    public Field maxFactor;

    public void IDAwake()
    {
        field.objectCount = standart.objectCount + (factor.objectCount * constant.objectCount);
        field.ObjectTypeCount = standart.ObjectTypeCount + (factor.ObjectTypeCount * constant.ObjectTypeCount);
        field.rivalMaxPower = standart.rivalMaxPower + (factor.rivalMaxPower * constant.rivalMaxPower);
        FightBarSystem.Instance.rivalMaxHit = field.rivalMaxPower;
        field.barHealth = standart.barHealth + (factor.barHealth * constant.barHealth);

        if (factor.objectCount > maxFactor.objectCount)
            factor.objectCount = maxFactor.objectCount;
        if (factor.ObjectTypeCount > maxFactor.ObjectTypeCount)
            factor.ObjectTypeCount = maxFactor.ObjectTypeCount;
        if (factor.rivalMaxPower > maxFactor.rivalMaxPower)
            factor.rivalMaxPower = maxFactor.rivalMaxPower;
        if (factor.barHealth > maxFactor.barHealth)
            factor.barHealth = maxFactor.barHealth;
    }

    public void SetObjectTypeCount()
    {
        factor.ObjectTypeCount++;
        field.ObjectTypeCount = standart.ObjectTypeCount + (factor.ObjectTypeCount * constant.ObjectTypeCount);

        if (factor.ObjectTypeCount > maxFactor.ObjectTypeCount)
            factor.ObjectTypeCount = maxFactor.ObjectTypeCount;

        GameManager.Instance.FactorPlacementWrite(ItemData.Instance.factor);
    }

    public void SetObjectCount()
    {
        factor.objectCount++;
        field.objectCount = standart.objectCount + (factor.objectCount * constant.objectCount);

        if (factor.objectCount > maxFactor.objectCount)
            factor.objectCount = maxFactor.objectCount;

        GameManager.Instance.FactorPlacementWrite(ItemData.Instance.factor);
    }

    public void SetRivalMaxPower()
    {
        factor.rivalMaxPower++;
        field.rivalMaxPower = standart.rivalMaxPower + (factor.rivalMaxPower * constant.rivalMaxPower);

        if (factor.rivalMaxPower > maxFactor.rivalMaxPower)
            factor.rivalMaxPower = maxFactor.rivalMaxPower;

        GameManager.Instance.FactorPlacementWrite(ItemData.Instance.factor);
    }

    public void SetBarHealth()
    {
        factor.barHealth++;
        field.barHealth = standart.barHealth + (factor.barHealth * constant.barHealth);

        if (factor.barHealth > maxFactor.barHealth)
            factor.barHealth = maxFactor.barHealth;

        GameManager.Instance.FactorPlacementWrite(ItemData.Instance.factor);
    }
}
