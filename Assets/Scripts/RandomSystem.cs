using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class RandomSystem : MonoSingleton<RandomSystem>
{
    public List<GameObject> ObjectList = new List<GameObject>();
    public List<int> ObjectTypeInt = new List<int>();
    public List<int> ObjectCountInt = new List<int>();
    public bool[,] ObjectGrid = new bool[10, 10];
    [SerializeField] private GameObject _objectPosTemplate;
    [SerializeField] private int _OPObjectCount;
    [SerializeField] private int _xDÝstance, _zDÝstance;
    [SerializeField] private float _objectPlacementTime;

    public void StartRandomSystem()
    {
        StartCoroutine(ObjectPlacementIenumerator(_OPObjectCount, ItemData.Instance.field.ObjectTypeCount, _xDÝstance, _zDÝstance, _objectPlacementTime, _objectPosTemplate, ObjectList));
    }

    public void AllObjectCallBack()
    {
        int limit = ObjectList.Count - 1;
        for (int i = limit; i >= 0; i--)
        {
            ObjectPool.Instance.AddObject(_OPObjectCount + ObjectList[i].GetComponent<ObjectID>().objectID, ObjectList[i]);
        }
    }

    public void ObjectShake(GameObject obj)
    {
        obj.transform.DOShakeScale(0.2f);
    }

    public IEnumerator ObjectPlacementIenumerator(int OPObjectCount, int maxObjectCount, int xDÝstance, int zDistance, float objectPlacementTime, GameObject objectPosTemplate, List<GameObject> objects)
    {
        while (true)
        {
            if (ItemData.Instance.field.objectCount >= objects.Count)
            {
                int ID = IDSelect(maxObjectCount);
                for (int i1 = 0; i1 < 4; i1++)
                {
                    GameObject obj = GetObject(OPObjectCount + ID);
                    ObjectIDPlacement(ID, obj, objects);
                    AddList(obj, objects);
                    ObjectPositionPlacement(obj, objectPosTemplate, xDÝstance, zDistance);
                }
                yield return new WaitForSeconds(objectPlacementTime);
                AddListInt(ID, 4, ObjectTypeInt, ObjectCountInt);
            }
            yield return null;
        }
    }

    public void ObjectPoolAdd(GameObject obj, List<GameObject> objects, int ID)
    {
        for (int i = 0; i < objects.Count; i++)
        {
            if (objects[i] == obj)
            {
                objects.RemoveAt(i);
            }
        }
        ObjectPool.Instance.AddObject(_OPObjectCount + ID, obj);
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
    private void ObjectPositionPlacement(GameObject obj, GameObject objectPosTemplate, int xDistance, int zDistance)
    {
        int tempX = Random.Range(0, xDistance);
        int tempZ = Random.Range(0, zDistance);
        bool isFull = false;
        if (ObjectGrid[tempX, tempZ] == true)
            isFull = true;
        if (!isFull)
        {
            ObjectID objectID = obj.GetComponent<ObjectID>();
            objectID.lineCount = tempX;
            objectID.ColumnCount = tempZ;
            ObjectGrid[tempX, tempZ] = true;
            obj.transform.position = new Vector3(objectPosTemplate.transform.position.x + tempX, objectPosTemplate.transform.position.y, objectPosTemplate.transform.position.z + tempZ);
        }
        else
            ObjectPositionPlacement(obj, objectPosTemplate, xDistance, zDistance);
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
