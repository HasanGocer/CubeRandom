using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticalSystem : MonoSingleton<ParticalSystem>
{
    [SerializeField] private int _OPforthParticalCount;
    [SerializeField] private GameObject comboUI;

    public IEnumerator ForthObjectPartical(GameObject pos)
    {
        GameObject part = ObjectPool.Instance.GetPooledObject(_OPforthParticalCount);
        part.transform.position = pos.transform.position;
        comboUI.SetActive(true);
        yield return new WaitForSeconds(3);
        comboUI.SetActive(false);
        ObjectPool.Instance.AddObject(_OPforthParticalCount, part);
    }
}
