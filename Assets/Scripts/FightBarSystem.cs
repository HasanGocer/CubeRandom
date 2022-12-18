using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FightBarSystem : MonoSingleton<FightBarSystem>
{
    [SerializeField] private int playerScore, rivalScore;
    [SerializeField] private int maxScore;
    [SerializeField] private int rivalMaxHit, rivalHitTime;
    [SerializeField] private Image bar;

    public void StartFightBar()
    {
        BarUpdate(playerScore, bar);
        StartCoroutine(RivalHitEnum(rivalHitTime, rivalMaxHit));
    }

    public IEnumerator RivalHitEnum(int waitTime, int plusMaxRange)
    {
        while (GameManager.Instance.isStart)
        {
            yield return new WaitForSeconds(waitTime);
            if (GameManager.Instance.isStart)
                StartCoroutine(AnimControl.Instance.CallHitRival());
            int count = Random.Range(1, plusMaxRange);
            RivalScoreAdd(count);
        }
    }
    public void PlayerScoreAdd(int plus)
    {
        PlayerScoreAddBar(plus, maxScore, bar);
    }
    public void RivalScoreAdd(int plus)
    {
        RivalScoreAddBar(plus, maxScore, bar);
    }

    private void RivalScoreAddBar(int plus, int maxScore, Image bar)
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
        BarUpdate(maxScore, bar);
    }
    private void PlayerScoreAddBar(int plus, int maxScore, Image bar)
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
                playerScore += rivalScore * -1;
                rivalScore = 0;
            }
        }
        BarUpdate(maxScore, bar);
    }
    private void BarUpdate(int maxScore, Image bar)
    {
        if (playerScore > 0)
        {
            float count = 0.5f + (((float)playerScore / (float)maxScore) / 2);
            if (count >= 1)
            {
                Buttons.Instance.winPanel.SetActive(true);
                GameManager.Instance.isStart = false;
                RandomSystem.Instance.AllObjectCallBack();
                StartCoroutine(AnimControl.Instance.FinishHim());
                AnimControl.Instance.CallPlayerWin();
                bar.fillAmount = 1;
            }
            else
                StartCoroutine(BarUpdateIenum(count - bar.fillAmount));
        }
        else if (rivalScore > 0)
        {
            float count = 0.5f - (((float)rivalScore / (float)maxScore) / 2);
            if (count <= 0)
            {
                Buttons.Instance.failPanel.SetActive(true);
                GameManager.Instance.isStart = false;
                RandomSystem.Instance.AllObjectCallBack();
                AnimControl.Instance.CallRivalWin();
                bar.fillAmount = 0;
            }
            else
                StartCoroutine(BarUpdateIenum(count - bar.fillAmount));
        }
        else
            bar.fillAmount = 0.5f;
    }

    public IEnumerator BarUpdateIenum(float count)
    {
        float timer = 0;
        float finish;
        float start = bar.fillAmount;

        if (count > 0)
            finish = bar.fillAmount + count;
        else
            finish = bar.fillAmount - count;

        while (true)
        {
            timer += Time.deltaTime;
            bar.fillAmount = Mathf.Lerp(start, finish, timer);
            yield return new WaitForEndOfFrame();
            if (bar.fillAmount == finish)
                break;
        }
    }

}
