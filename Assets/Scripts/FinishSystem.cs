using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishSystem : MonoSingleton<FinishSystem>
{
    public List<bool> FinishCheckBool = new List<bool>();

    public void CheckCount()
    {
        RandomSystem randomSystem = RandomSystem.Instance;

        for (int i = 0; i < randomSystem.ObjectTypeInt.Count; i++)
        {
            if (randomSystem.ObjectCountInt[i] == 0)
            {
                FinishCheckBool[i] = true;
                CheckFinish();
            }
            else if (randomSystem.ObjectCountInt[i] == 2 || randomSystem.ObjectCountInt[i] == 1)
            {
                Buttons.Instance.failPanel.SetActive(true);
                GameManager.Instance.isStart = false;
            }
        }
    }

    public void CheckFinish()
    {
        bool isFinish = true;
        for (int i = 0; i < FinishCheckBool.Count; i++)
        {
            if (!FinishCheckBool[i])
                isFinish = false;
        }
        if (isFinish)
        {
            GameManager gameManager = GameManager.Instance;
            gameManager.isStart = false;
            Buttons.Instance.winPanel.SetActive(true);
            gameManager.level++;
            gameManager.SetLevel();
            LevelSystem.Instance.NewLevelCheckField();
        }
    }
}
