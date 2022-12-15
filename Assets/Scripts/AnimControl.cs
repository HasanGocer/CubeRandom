using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimControl : MonoBehaviour
{
    [SerializeField] private Animator mainAnim, enemyAnim;
    
    
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
