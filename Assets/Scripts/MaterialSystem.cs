using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MaterialSystem : MonoSingleton<MaterialSystem>
{
    public List<Material> PlayerMaterials = new List<Material>();
    public List<Material> RivalMaterials = new List<Material>();
    public SkinnedMeshRenderer rivalPlayer;
}
