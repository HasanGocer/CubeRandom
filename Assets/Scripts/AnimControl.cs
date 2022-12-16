using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Animancer;

public class AnimControl : MonoSingleton<AnimControl>
{
    [SerializeField] private AnimancerComponent mainAnim, enemyAnim;
    [SerializeField] private AnimationClip waiting, boxing1, boxing2, beating1, beating2, kick1, kick2, death, win;
    //[SerializeField] private Animator mainAnim, enemyAnim;
    public GameObject finishHim;

    public void StartAnimencer()
    {
        mainAnim.Play(waiting);
        enemyAnim.Play(waiting);
    }

    public IEnumerator CallHitRival()
    {
        enemyAnim.Play(boxing1, 0.3f);
        yield return new WaitForSeconds(0.55f);
        mainAnim.Play(beating1, 0.1f);
        yield return new WaitForSeconds(1f);
        mainAnim.Play(waiting, 0.3f);
        enemyAnim.Play(waiting, 0.3f);
    }

    public IEnumerator CallHitPlayer(int ID)
    {
        if (ID == 1)
            mainAnim.Play(boxing1, 0.3f);
        else if (ID == 2)
            mainAnim.Play(boxing1, 0.3f);
        else if (ID == 3)
            mainAnim.Play(boxing1, 0.3f);

        yield return new WaitForSeconds(0.55f);
        enemyAnim.Play(beating2, 0.1f);
        yield return new WaitForSeconds(1f);
        enemyAnim.Play(waiting, 0.3f);
        mainAnim.Play(waiting, 0.3f);
    }

    public void CallRivalWin()
    {
        enemyAnim.Play(win, 0.3f);
        mainAnim.Play(death, 0.3f);
    }

    public void CallPlayerWin()
    {
        mainAnim.Play(win, 0.3f);
        enemyAnim.Play(death, 0.3f);
    }

    public IEnumerator FinishHim()
    {
        finishHim.SetActive(true);
        yield return new WaitForSeconds(1);
        finishHim.SetActive(false);
    }



    public void CallWaitingAnim()
    {
        mainAnim.Play("waiting");
    }
    public void CallEnemyWaitingAnim()
    {
        enemyAnim.Play("waiting");
    }
    public void CallBoxingAnim()
    {
        mainAnim.Play("boxing");
    }
    public void CallEnemyBoxingAnim()
    {
        enemyAnim.Play("boxing");
    }
    public void CallBoxing2Anim()
    {
        mainAnim.Play("boxing2");
    }
    public void CallEnemyBoxing2Anim()
    {
        enemyAnim.Play("boxing2");
    }
    public void CallGetFightAnim()
    {
        mainAnim.Play("getfight1");
    }
    public void CallEnemyGetFightAnim()
    {
        enemyAnim.Play("getfight1");
    }
    public void CallGetFight2Anim()
    {
        mainAnim.Play("getfight2");
    }
    public void CallEnemyGetFight2Anim()
    {
        enemyAnim.Play("getfight2");
    }
    public void CallKick1Anim()
    {
        mainAnim.Play("kick1");
    }
    public void CallEnemyKick1Anim()
    {
        enemyAnim.Play("kick1");
    }
    public void CallKick2Anim()
    {
        mainAnim.Play("kick2");
    }
    public void CallEnemyKick2Anim()
    {
        enemyAnim.Play("kick2");
    }
    public void CallDeathAnim()
    {
        mainAnim.Play("death");
    }
    public void CallEnemyDeathAnim()
    {
        enemyAnim.Play("death");
    }
}
