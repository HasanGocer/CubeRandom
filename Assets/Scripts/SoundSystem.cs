using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundSystem : MonoSingleton<SoundSystem>
{
    [SerializeField] private AudioSource mainSource;
    [SerializeField] private AudioClip mainMusic, failEffect, finishEffect, startEffect, touchEffect;

    public void MainMusicPlay()
    {
        mainSource.clip = mainMusic;
        mainSource.Play();
        mainSource.volume = 70;
    }

    public void MainMusicStop()
    {
        mainSource.Stop();
        mainSource.volume = 0;
    }

    public void CallEffectFail()
    {
        mainSource.PlayOneShot(failEffect);
    }
    public void CallEffectFinish()
    {
        mainSource.PlayOneShot(finishEffect);
    }
    public void CallEffectStart()
    {
        mainSource.PlayOneShot(startEffect);
    }
    public void CallEffectTouch()
    {
        mainSource.PlayOneShot(touchEffect);
    }
}
