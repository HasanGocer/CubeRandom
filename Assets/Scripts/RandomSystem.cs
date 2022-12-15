using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomSystem : MonoSingleton<RandomSystem>
{
    public List<GameObject> ObjectList = new List<GameObject>();
    public List<int> ObjectTypeInt = new List<int>();
    public List<int> ObjectCountInt = new List<int>();
    [SerializeField] private GameObject _objectPosTemplate;
    [SerializeField] private int _OPObjectCount;
    [SerializeField] private int _xD�stance, _zD�stance;
    [SerializeField] private float _objectPlacementTime;

    public void StartRandomSystem()
    {
        StartCoroutine(ObjectPlacementIenumerator(_OPObjectCount, ItemData.Instance.field.ObjectTypeCount, _xD�stance, _zD�stance, _objectPlacementTime, _objectPosTemplate, ObjectList));
    }

    public IEnumerator ObjectPlacementIenumerator(int OPObjectCount, int maxObjectCount, int xD�stance, int zDistance, float objectPlacementTime, GameObject objectPosTemplate, List<GameObject> objects)
    {
        while (true)
        {
            if (ItemData.Instance.field.objectCount >= ObjectList.Count)
            {
                int ID = IDSelect(maxObjectCount);
                for (int i1 = 0; i1 < 4; i1++)
                {
                    GameObject obj = GetObject(OPObjectCount + ID);
                    ObjectIDPlacement(ID, obj, objects);
                    AddList(obj, objects);
                    ObjectPositionPlacement(obj, objectPosTemplate, xD�stance, zDistance);
                }
                yield return new WaitForSeconds(objectPlacementTime);
                AddListInt(ID, 4, ObjectTypeInt, ObjectCountInt);
            }
            yield return null;
        }
    }

    public void ObjectPoolAdd(GameObject obj, List<GameObject> objects)
    {
        for (int i = 0; i < objects.Count; i++)
        {
            if (objects[i] == obj)
                objects.RemoveAt(i);
        }
        ObjectPool.Instance.AddObject(_OPObjectCount + obj.GetComponent<ObjectID>().objectID, obj);
    }

    private GameObject GetObject(int OPObjectCount)
    {
        return ObjectPool.Instance.GetPooledObject(OPObjectCount);
    }
    private void AddList(GameObject obj, List<GameObject> objects)
    {
        objects.Add(obj);
    }
    private int IDSelect(int maxObjectCount)
    {
        return Random.Range(0, maxObjectCount);
    }
    private void ObjectIDPlacement(int ID, GameObject obj, List<GameObject> objects)
    {
        ObjectID objectID = obj.GetComponent<ObjectID>();

        objectID.objectID = ID;
        objectID.ListCount = objects.Count - 1;
    }
    private void ObjectPositionPlacement(GameObject obj, GameObject objectPosTemplate, int xD�stance, int zDistance)
    {
        int tempX = Random.Range(0, xD�stance);
        int tempZ = Random.Range(0, zDistance);
        obj.transform.position = new Vector3(objectPosTemplate.transform.position.x + tempX, objectPosTemplate.transform.position.y, objectPosTemplate.transform.position.z + tempZ);
    }
    private void AddListInt(int ID, int Count, List<int> ObjectTypeInt, List<int> ObjectCountInt)
    {
        bool isHere = false;
        for (int i = 0; i < ObjectTypeInt.Count; i++)
        {
            if (ID == ObjectTypeInt[i])
            {
                isHere = true;
                ObjectCountInt[i] += Count;
            }
        }

        if (!isHere)
        {
            ObjectTypeInt.Add(ID);
            ObjectCountInt.Add(Count);
            FinishSystem.Instance.FinishCheckBool.Add(false);
        }
    }
}
