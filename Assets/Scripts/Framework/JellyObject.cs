using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(Transform))]
public class JellyObject : MonoBehaviour
{
    public Mesh CubeMesh;  // K�p meshi

    [Header("Wave Settings")]
    [Range(0.0f, 1.0f)]
    public float Amplitude = 0.1f;  // Dalga y�ksekli�i
    [Range(0.0f, 10.0f)]
    public float Frequency = 1.0f;  // Dalga say�s�
    [Range(0.0f, 360.0f)]
    public float Phase = 0.0f;  // Dalga faz�

    private MeshFilter meshFilter;
    private Transform transform;

    private Vector3[] originalVertices;  // Ba�lang�� k��eleri
    private Vector3 waveVector;  // Dalga vekt�r�

    void Start()
    {
        // Objenin meshFilter ve transform komponentlerini al
        meshFilter = GetComponent<MeshFilter>();
        transform = GetComponent<Transform>();

        // Objenin meshini k�p meshine de�i�tir
        meshFilter.mesh = CubeMesh;

        // Ba�lang�� k��elerini kaydet
        originalVertices = meshFilter.mesh.vertices;

        // Dalga vekt�r�n� hesapla
        waveVector = new Vector3(0, Amplitude, 0);
    }

    void Update()
    {
        // Objenin meshini dalgal� bir �ekilde deforme et
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