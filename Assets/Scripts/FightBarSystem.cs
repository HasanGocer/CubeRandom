using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FightBarSystem : MonoSingleton<FightBarSystem>
{
    [SerializeField] private int playerScore, rivalScore;
    [SerializeField] private int maxScore;
    [SerializeField] private Image bar;

    public void StartFightBar()
    {
        BarUpdate(playerScore, rivalScore, maxScore, bar);
    }

    public void PlayerScoreAdd(int plus)
    {
        PlayerScoreAddBar(plus, playerScore, rivalScore, maxScore, bar);
    }
    public void RivalScoreAdd(int plus)
    {
        RivalScoreAddBar(plus, playerScore, rivalScore, maxScore, bar);
    }

    private void RivalScoreAddBar(int plus, int playerScore, int rivalScore, int maxScore, Image bar)
    {
        if (rivalScore > 0 || playerScore == 0)
        {
            rivalScore += plus;
        }
        else
        {
            playerScore -= plus;
            if (playerScore < 0)
            {
                rivalScore += playerScore - 1;
                playerScore = 0;
            }
        }
        BarUpdate(playerScore, rivalScore, maxScore, bar);
    }
    private void PlayerScoreAddBar(int plus, int playerScore, int rivalScore, int maxScore, Image bar)
    {
        if (playerScore > 0 || rivalScore == 0)
        {
            playerScore += plus;
        }
        else
        {
            rivalScore -= plus;
            if (rivalScore < 0)
            {
                playerScore += rivalScore - 1;
                rivalScore = 0;
            }
        }
        BarUpdate(playerScore, rivalScore, maxScore, bar);
    }
    private void BarUpdate(int playerScore, int rivalScore, int maxScore, Image bar)
    {
        if (playerScore > 0)
        {
            float count = 0.5f + ((playerScore / maxScore) / 2);
            if (count >= 1)
            {
                //win
                bar.fillAmount = 1;
            }
            else
                bar.fillAmount = count;
        }
        else if (rivalScore > 0)
        {
            float count = 0.5f - ((playerScore / maxScore) / 2);
            if (count <= 0)
            {
                //lose
                bar.fillAmount = 0;
            }
            else
                bar.fillAmount = count;
        }
        else
            bar.fillAmount = 0.5f;
    }

}
