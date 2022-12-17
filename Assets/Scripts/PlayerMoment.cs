using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMoment : MonoBehaviour
{
    // Karakterin hareket h�z�
    public float moveSpeed = 5f;

    // Karakterin rotasyon h�z�
    public float rotationSpeed = 5f;

    // Oyun i�inde kullan�lacak joystick ve tu�lar
    private string horizontalInput = "Horizontal";
    private string verticalInput = "Vertical";
    private string jumpInput = "Jump";

    // Karakterin z�plama kuvveti
    public float jumpForce = 5f;

    // Karakterin z�plama havada kalma s�resi
    public float jumpTime = 1f;

    // Z�plama havada kalma zaman�
    private float jumpTimeCounter;

    // Karakterin z�plama yetene�i
    public bool canJump;

    // Karakterin yere de�ip de�medi�ini kontrol etmek i�in kullan�lacak raycast
    public Transform groundCheck;
    public float groundCheckRadius;
    public LayerMask whatIsGround;

    // Yere de�ip de�medi�ini tutacak de�i�ken
    private bool isGrounded;

    // Karakterin hareket y�n�
    private Vector3 moveDirection;

    // Karakterin animasyonlar�n� kontrol etmek i�in kullan�lacak Animator component'�
    private Animator anim;

    void Start()
    {
        // Animator component'�n� al
        anim = GetComponent<Animator>();
    }

    // Update fonksiyonu her frame'de �a�r�l�r
    void Update()
    {
        // Yere de�ip de�medi�ini kontrol etmek i�in raycast kullan�n
        isGrounded = Physics.CheckSphere(groundCheck.position, groundCheckRadius, whatIsGround);

        // E�er yere de�iyorsa, z�plama havada kalma zaman� s�f�rla
        if (isGrounded)
        {
            jumpTimeCounter = jumpTime;
        }

        // E�er joystick veya y�n tu�lar� kullan�l�yorsa, hareket et
        float moveHorizontal = Input.GetAxis(horizontalInput);
        float moveVertical = Input.GetAxis(verticalInput);
        moveDirection = (moveVertical * Vector3.forward + moveHorizontal * Vector3.right).normalized;

        // E�er z�plama tu�u kullan�l�yorsa, z�pla
        if (Input.GetButtonDown(jumpInput) && jumpTimeCounter > 0)
        {
            Jump();
        }

        // E�er z�plama havada kalma zaman� varsa, z�plama havada kalma zaman�n� azalt
        if (jumpTimeCounter > 0)
        {
            jumpTimeCounter -= Time.deltaTime;
        }

        // Hareket etme animasyonunu etkinle�tir
        anim.SetBool("isMoving", moveDirection != Vector3.zero);
    }

    // FixedUpdate fonksiyonu her physics update'de �a�r�l�r
    void FixedUpdate()
    {
        // Hareket et
        transform.position += moveDirection * moveSpeed * Time.deltaTime;

        // Y�n� de�i�tir
        if (moveDirection != Vector3.zero)
        {
            transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(moveDirection), rotationSpeed * Time.deltaTime);
        }
    }

    // Z�plama fonksiyonu
    void Jump()
    {
        // Karakterin rigidbody'sine z�plama kuvveti uygula
        GetComponent<Rigidbody>().velocity = Vector3.up * jumpForce;

        // Z�plama animasyonunu etkinle�tir
        anim.SetTrigger("jump");
    }
}
