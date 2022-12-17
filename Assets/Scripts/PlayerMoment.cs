using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMoment : MonoBehaviour
{
    // Karakterin hareket hýzý
    public float moveSpeed = 5f;

    // Karakterin rotasyon hýzý
    public float rotationSpeed = 5f;

    // Oyun içinde kullanýlacak joystick ve tuþlar
    private string horizontalInput = "Horizontal";
    private string verticalInput = "Vertical";
    private string jumpInput = "Jump";

    // Karakterin zýplama kuvveti
    public float jumpForce = 5f;

    // Karakterin zýplama havada kalma süresi
    public float jumpTime = 1f;

    // Zýplama havada kalma zamaný
    private float jumpTimeCounter;

    // Karakterin zýplama yeteneði
    public bool canJump;

    // Karakterin yere deðip deðmediðini kontrol etmek için kullanýlacak raycast
    public Transform groundCheck;
    public float groundCheckRadius;
    public LayerMask whatIsGround;

    // Yere deðip deðmediðini tutacak deðiþken
    private bool isGrounded;

    // Karakterin hareket yönü
    private Vector3 moveDirection;

    // Karakterin animasyonlarýný kontrol etmek için kullanýlacak Animator component'ý
    private Animator anim;

    void Start()
    {
        // Animator component'ýný al
        anim = GetComponent<Animator>();
    }

    // Update fonksiyonu her frame'de çaðrýlýr
    void Update()
    {
        // Yere deðip deðmediðini kontrol etmek için raycast kullanýn
        isGrounded = Physics.CheckSphere(groundCheck.position, groundCheckRadius, whatIsGround);

        // Eðer yere deðiyorsa, zýplama havada kalma zamaný sýfýrla
        if (isGrounded)
        {
            jumpTimeCounter = jumpTime;
        }

        // Eðer joystick veya yön tuþlarý kullanýlýyorsa, hareket et
        float moveHorizontal = Input.GetAxis(horizontalInput);
        float moveVertical = Input.GetAxis(verticalInput);
        moveDirection = (moveVertical * Vector3.forward + moveHorizontal * Vector3.right).normalized;

        // Eðer zýplama tuþu kullanýlýyorsa, zýpla
        if (Input.GetButtonDown(jumpInput) && jumpTimeCounter > 0)
        {
            Jump();
        }

        // Eðer zýplama havada kalma zamaný varsa, zýplama havada kalma zamanýný azalt
        if (jumpTimeCounter > 0)
        {
            jumpTimeCounter -= Time.deltaTime;
        }

        // Hareket etme animasyonunu etkinleþtir
        anim.SetBool("isMoving", moveDirection != Vector3.zero);
    }

    // FixedUpdate fonksiyonu her physics update'de çaðrýlýr
    void FixedUpdate()
    {
        // Hareket et
        transform.position += moveDirection * moveSpeed * Time.deltaTime;

        // Yönü deðiþtir
        if (moveDirection != Vector3.zero)
        {
            transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(moveDirection), rotationSpeed * Time.deltaTime);
        }
    }

    // Zýplama fonksiyonu
    void Jump()
    {
        // Karakterin rigidbody'sine zýplama kuvveti uygula
        GetComponent<Rigidbody>().velocity = Vector3.up * jumpForce;

        // Zýplama animasyonunu etkinleþtir
        anim.SetTrigger("jump");
    }
}
