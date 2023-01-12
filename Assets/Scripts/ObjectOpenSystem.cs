using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class ObjectOpenSystem : MonoSingleton<ObjectOpenSystem>
{
    public List<Sprite> ObjectImage = new List<Sprite>();
    public Image mainImage;
    [SerializeField] private GameObject newImagePanel;
    [SerializeField] private GameObject newObjectParticalGO;
    [SerializeField] private GameObject firstPosTemp, lastposTemp;
    public Button newImageButton;

    public void NewObjectOpenPanel()
    {
        mainImage.sprite = ObjectImage[ItemData.Instance.field.ObjectTypeCount - 1];
        newImagePanel.SetActive(true);
        Buttons.Instance.winPanel.SetActive(false);
        StartCoroutine(BackgroundFlip.Instance.Flip());
        StartCoroutine(ParticalSystem.Instance.NewObjectPartical());
    }

    public IEnumerator NewImageButton()
    {
        //    if (Application.internetReachability != NetworkReachability.NotReachable && AdManager.Instance.IsReadyInterstitialAd())
        //       AdManager.Instance.interstitial.Show();
        newImagePanel.SetActive(false);
        Buttons.Instance.winPanel.gameObject.SetActive(false);
        GameObject obj = Instantiate(newObjectParticalGO);
        obj.transform.position = firstPosTemp.transform.position;
        obj.transform.DOJump(lastposTemp.transform.position, 2, 2, 2);
        yield return new WaitForSeconds(1f);
        SceneManager.LoadScene(1);
    }
}
