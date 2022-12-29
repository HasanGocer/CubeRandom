using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Buttons : MonoSingleton<Buttons>
{
    //managerde bulunacak

    [SerializeField] private GameObject _money;

    [SerializeField] private GameObject _startPanel;
    [SerializeField] private Button _startButton;

    [SerializeField] private Button _settingButton;
    [SerializeField] private GameObject _settingGame;

    [SerializeField] private Sprite _red, _green;
    [SerializeField] private Button _settingBackButton;
    [SerializeField] private Button _soundButton, _vibrationButton;

    public GameObject winPanel, failPanel;
    [SerializeField] private Button _winPrizeButton, _winButton, _failButton;
    public Text finishGameMoneyText;
    [SerializeField] private GameObject _startObject1;

    public Text moneyText, levelText;

    private void Start()
    {
        ButtonPlacement();
        SettingPlacement();
        levelText.text = GameManager.Instance.level.ToString();
        moneyText.text = GameManager.Instance.money.ToString();
    }
    public IEnumerator NoThanxOnActive()
    {
        yield return new WaitForSeconds(3);
        _winButton.gameObject.SetActive(true);
    }

    private void SettingPlacement()
    {
        if (GameManager.Instance.sound == 1)
        {
            _soundButton.gameObject.GetComponent<Image>().sprite = _green;
            // SoundSystem.Instance.MainMusicPlay();
        }
        else
        {
            _soundButton.gameObject.GetComponent<Image>().sprite = _red;
        }

        if (GameManager.Instance.vibration == 1)
        {
            _vibrationButton.gameObject.GetComponent<Image>().sprite = _green;
        }
        else
        {
            _vibrationButton.gameObject.GetComponent<Image>().sprite = _red;
        }
    }
    private void ButtonPlacement()
    {
        _startButton.onClick.AddListener(StartButton);
        _settingButton.onClick.AddListener(SettingButton);
        _settingBackButton.onClick.AddListener(SettingBackButton);
        _soundButton.onClick.AddListener(SoundButton);
        _vibrationButton.onClick.AddListener(VibrationButton);
        _winPrizeButton.onClick.AddListener(() => StartCoroutine(WinPrizeButton()));
        _winButton.onClick.AddListener(() => StartCoroutine(WinButton()));
        _failButton.onClick.AddListener(FailButton);
    }


    private void StartButton()
    {
        _startObject1.SetActive(true);
        _startPanel.SetActive(false);
        GameManager.Instance.isStart = true;
        RandomSystem.Instance.StartRandomSystem();
        FightBarSystem.Instance.StartFightBar();
        AnimControl.Instance.StartAnimencer();
    }
    private IEnumerator WinPrizeButton()
    {
        BarSystem.Instance.BarStopButton();
        GameManager.Instance.level++;
        GameManager.Instance.SetLevel();
        LevelSystem.Instance.NewLevelCheckField();
        _winButton.enabled = false;
        _winPrizeButton.enabled = false;
        yield return new WaitForSeconds(3);
        SceneManager.LoadScene(0);
    }
    private IEnumerator WinButton()
    {
        print(1);
        MoneySystem.Instance.MoneyTextRevork(GameManager.Instance.addedMoney);
        GameManager.Instance.level++;
        GameManager.Instance.SetLevel();
        LevelSystem.Instance.NewLevelCheckField();
        _winButton.enabled = false;
        _winPrizeButton.enabled = false;
        yield return new WaitForSeconds(3);
        SceneManager.LoadScene(0);
    }
    private void FailButton()
    {
        MoneySystem.Instance.MoneyTextRevork(GameManager.Instance.addedMoney);
        SceneManager.LoadScene(0);
    }
    private void SettingButton()
    {
        _settingGame.SetActive(true);
        _settingButton.gameObject.SetActive(false);
        _money.SetActive(false);
    }
    private void SettingBackButton()
    {
        _settingGame.SetActive(false);
        _settingButton.gameObject.SetActive(true);
        _money.SetActive(true);
    }
    private void SoundButton()
    {
        if (GameManager.Instance.sound == 1)
        {
            GameManager.Instance.sound = 0;
            _soundButton.gameObject.GetComponent<Image>().sprite = _red;
            SoundSystem.Instance.MainMusicStop();
            GameManager.Instance.sound = 0;
            GameManager.Instance.SetSound();
        }
        else
        {
            GameManager.Instance.sound = 1;
            _soundButton.gameObject.GetComponent<Image>().sprite = _green;
            SoundSystem.Instance.MainMusicPlay();
            GameManager.Instance.sound = 1;
            GameManager.Instance.SetSound();
        }
    }
    private void VibrationButton()
    {
        if (GameManager.Instance.vibration == 1)
        {
            GameManager.Instance.vibration = 0;
            _vibrationButton.gameObject.GetComponent<Image>().sprite = _red;
            GameManager.Instance.vibration = 0;
            GameManager.Instance.SetVibration();
        }
        else
        {
            GameManager.Instance.vibration = 1;
            _vibrationButton.gameObject.GetComponent<Image>().sprite = _green;
            GameManager.Instance.vibration = 1;
            GameManager.Instance.SetVibration();
        }
    }

}
