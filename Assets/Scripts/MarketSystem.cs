using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MarketSystem : MonoSingleton<MarketSystem>
{
    [System.Serializable]
    public class FieldBool
    {
        public List<bool> PlayerColor = new List<bool>();
        public int equipedCount;
    }

    [System.Serializable]
    public class FieldRivalColor
    {
        public List<int> PlayerColorPrice = new List<int>();
        public List<Material> PlayerColorMaterial = new List<Material>();
        public List<Button> PlayerImageButton = new List<Button>();
        public List<Image> PlayerImageLock = new List<Image>();
    }

    public FieldBool fieldBool;
    public FieldRivalColor fieldPlayerColor;

    [SerializeField] private GameObject mainPlayer;
    [SerializeField] private Button _useButton, _equipedButton, _moneyBuyButton, _addBuyButton;
    [SerializeField] private Text _moneyBuyPriceText;
    [SerializeField] private Button _marketOpenButton, _marketCloseButton;
    public GameObject marketPanel;
    public int fieldCount;

    public void MarketStart()
    {
        MarketOnOffPlacement();
        PlayerMaterialPlacement();
        DownButtonPlacement();
        MarketStartPlacement();
    }

    public void MarketOpenButton()
    {
        marketPanel.SetActive(true);
    }

    public void MarketCloseButton()
    {
        marketPanel.SetActive(false);
    }

    private void SelectMarketPlayerColorFieldButton(int count)
    {
        fieldCount = count;
        if (fieldBool.PlayerColor[count] && fieldBool.equipedCount == count)
        {
            _equipedButton.gameObject.SetActive(true);
            _useButton.gameObject.SetActive(false);
            _moneyBuyButton.gameObject.SetActive(false);
            _addBuyButton.gameObject.SetActive(false);
        }
        else if (fieldBool.PlayerColor[count])
        {
            _equipedButton.gameObject.SetActive(false);
            _useButton.gameObject.SetActive(true);
            _moneyBuyButton.gameObject.SetActive(false);
            _addBuyButton.gameObject.SetActive(false);
        }
        else
        {
            _equipedButton.gameObject.SetActive(false);
            _useButton.gameObject.SetActive(false);
            _moneyBuyButton.gameObject.SetActive(true);
            _addBuyButton.gameObject.SetActive(true);
            _moneyBuyPriceText.text = fieldPlayerColor.PlayerColorPrice[count].ToString();
            //money para atamasý yap
        }
    }
    private void SelectMarketPlayerColorUseButton()
    {
        _equipedButton.gameObject.SetActive(true);
        _useButton.gameObject.SetActive(false);
        fieldBool.equipedCount = fieldCount;
        mainPlayer.transform.GetChild(1).GetComponent<SkinnedMeshRenderer>().material = fieldPlayerColor.PlayerColorMaterial[fieldCount];
        GameManager.Instance.MarketPlacementWrite(fieldBool);
    }
    private void SelectMarketPlayerColorMoneyBuyButton()
    {
        GameManager gameManager = GameManager.Instance;
        if (gameManager.money >= fieldPlayerColor.PlayerColorPrice[fieldCount])
        {
            MoneySystem.Instance.MoneyTextRevork(fieldPlayerColor.PlayerColorPrice[fieldCount] * -1);
            _equipedButton.gameObject.SetActive(false);
            _useButton.gameObject.SetActive(true);
            _moneyBuyButton.gameObject.SetActive(false);
            _addBuyButton.gameObject.SetActive(false);
            fieldPlayerColor.PlayerImageLock[fieldCount].gameObject.SetActive(false);
            fieldBool.PlayerColor[fieldCount] = true;
            GameManager.Instance.MarketPlacementWrite(fieldBool);
        }
    }
    private void SelectMarketPlayerColorAddBuyButton()
    {
        //add
        /*
                     _equipedButton.gameObject.SetActive(false);
            _useButton.gameObject.SetActive(true);
                    _moneyBuyButton.gameObject.SetActive(false);
            _addBuyButton.gameObject.SetActive(false);
            fieldBool.PlayerColor[fieldCount] = true;
            fieldPlayerColor.PlayerImageLock[fieldCount].gameObject.SetActive(false);
            GameManager.Instance.MarketPlacementWrite(fieldBool);
         
         */
    }
    private void PlayerMaterialPlacement()
    {
        mainPlayer.transform.GetChild(1).GetComponent<SkinnedMeshRenderer>().material = fieldPlayerColor.PlayerColorMaterial[fieldBool.equipedCount];
    }
    private void DownButtonPlacement()
    {
        _useButton.onClick.AddListener(SelectMarketPlayerColorUseButton);
        _moneyBuyButton.onClick.AddListener(SelectMarketPlayerColorMoneyBuyButton);
        _addBuyButton.onClick.AddListener(SelectMarketPlayerColorAddBuyButton);
    }
    private void MarketStartPlacement()
    {
        for (int i = 0; i < fieldPlayerColor.PlayerImageButton.Count; i++)
        {
            fieldPlayerColor.PlayerImageButton[i].onClick.AddListener(() => SelectMarketPlayerColorFieldButton(i));
            if (fieldBool.PlayerColor[i])
                fieldPlayerColor.PlayerImageLock[i].gameObject.SetActive(false);
        }
    }
    private void MarketOnOffPlacement()
    {
        _marketOpenButton.onClick.AddListener(MarketOpenButton);
        _marketCloseButton.onClick.AddListener(MarketCloseButton);
    }
}
