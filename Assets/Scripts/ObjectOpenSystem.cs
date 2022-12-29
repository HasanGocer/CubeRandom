using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

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
        mainImage.sprite = ObjectImage[ItemData.Instance.field.ObjectTypeCount];
        newImagePanel.SetActive(true);
        Buttons.Instance.winPanel.SetActive(false);
    }

    public IEnumerator NewImageButton()
    {
        newImagePanel.SetActive(false);
        Buttons.Instance.winPanel.gameObject.SetActive(false);
        GameObject obj = Instantiate(newObjectParticalGO);
        obj.transform.position = firstPosTemp.transform.position;
        obj.transform.DOJump(lastposTemp.transform.position, 2, 2, 2);
        yield return new WaitForSeconds(2);
        Buttons.Instance.winPanel.gameObject.SetActive(true);
        StartCoroutine(Buttons.Instance.NoThanxOnActive());
        StartCoroutine(ParticalSystem.Instance.FinishTimePartical());
    }
}
