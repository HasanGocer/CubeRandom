using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(Transform))]
public class JellyObject : MonoBehaviour
{
    public Mesh CubeMesh;  // Küp meshi

    [Header("Wave Settings")]
    [Range(0.0f, 1.0f)]
    public float Amplitude = 0.1f;  // Dalga yüksekliði
    [Range(0.0f, 10.0f)]
    public float Frequency = 1.0f;  // Dalga sayýsý
    [Range(0.0f, 360.0f)]
    public float Phase = 0.0f;  // Dalga fazý

    private MeshFilter meshFilter;
    private Transform transform;

    private Vector3[] originalVertices;  // Baþlangýç köþeleri
    private Vector3 waveVector;  // Dalga vektörü

    void Start()
    {
        // Objenin meshFilter ve transform komponentlerini al
        meshFilter = GetComponent<MeshFilter>();
        transform = GetComponent<Transform>();

        // Objenin meshini küp meshine deðiþtir
        meshFilter.mesh = CubeMesh;

        // Baþlangýç köþelerini kaydet
        originalVertices = meshFilter.mesh.vertices;

        // Dalga vektörünü hesapla
        waveVector = new Vector3(0, Amplitude, 0);
    }

    void Update()
    {
        // Objenin meshini dalgalý bir þekilde deforme et
        DeformMesh();
    }

    void DeformMesh()
    {
        Vector3[] vertices = meshFilter.mesh.vertices;
        for (int i = 0; i < vertices.Length; i++)
        {
            float yOffset = Mathf.Sin(Frequency * Time.time + Phase + Vector3.Distance(vertices[i], originalVertices[i]));
            vertices[i] = originalVertices[i] + waveVector * yOffset;
        }
        meshFilter.mesh.vertices = vertices;
        meshFilter.mesh.RecalculateNormals();
    }
}