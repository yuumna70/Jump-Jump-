using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Player : MonoBehaviour
{
    public GameManager gm;

    // 플레이어 받아오기
    public GameObject player;

    // 플레이어 이동속도
    public float speed;

    Rigidbody2D rig;

    // 점프하는 힘
    public float jumpPower;

    // 점프 횟수
    [HideInInspector]
    public int jumpCount;

    // 리스폰 포인트
    public List<Transform> respawnPoints = new List<Transform>();

    [HideInInspector]
    // 진짜 리스폰
    public Transform realRespawnPoint;

    Animator anim;

    //public float maxSpeed;


    // 하트
    private GameObject heart1;
    private GameObject heart2;
    private GameObject heart3;
    int deathCounter;

    // 오디오
    AudioSource audio, audio2, audio3;

    // 진행 바
    private GameObject pro1;
    private GameObject pro2;
    private GameObject pro3;
    private GameObject pro4;

    // 모바일 터치
    int pointerID;
    

    private void Awake()
    {
        heart1 = GameObject.Find("HeartContainer_1");
        heart2 = GameObject.Find("HeartContainer_2");
        heart3 = GameObject.Find("HeartContainer_3");

        audio = GetComponent<AudioSource>();
        audio2 = transform.GetChild(0).GetComponent<AudioSource>();
        audio3 = transform.GetChild(1).GetComponent<AudioSource>();
        anim = GetComponent<Animator>();

        pro1 = GameObject.Find("bar1");
        pro2 = GameObject.Find("bar2");
        pro3 = GameObject.Find("bar3");
        pro4 = GameObject.Find("bar4");

    }

    // Start is called before the first frame update
    void Start()
    {
        player = GetComponent<GameObject>();   
        rig = GetComponent<Rigidbody2D>();

        realRespawnPoint = respawnPoints[0];

        

    }

    // Update is called once per frame
    void Update()
    {
        if(gm.isPlay ==false)
        {
            return;
        }

        // 게임 시작하면 플레이어 오른쪽으로 계속 이동
        transform.Translate(Vector3.right * speed * Time.deltaTime);
        anim.SetBool("isWalk", true);
        //rig.AddForce(Vector3.right * 2.5f);

#if UNITY_EDITOR
        pointerID = -1;
#elif UNITY_IOS || UNITY_IPHONE
        pointerID = 0;
#endif

        // 터치하면 + 점프 두 번
        if (Input.GetMouseButtonDown(0) && jumpCount < 2 && !EventSystem.current.IsPointerOverGameObject(pointerID))
        {
            audio.Play();
            rig.AddForce(Vector2.up * jumpPower, ForceMode2D.Impulse);

            anim.SetBool("isClick", true);
            jumpCount++;
        }



    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        switch(collision.gameObject.tag)
        {
            case "Ground":
                jumpCount = 0;
                anim.SetBool("isClick", false);
                break;

            case "DeadZone":
            case "Bad":
                // transform.position = realRespawnPoint.position;

                audio3.Play();

                deathCounter++;
                transform.position = realRespawnPoint.position;

                if (deathCounter == 1)
                {
                    Destroy(heart3);
                }
                if (deathCounter == 2)
                {
                    Destroy(heart2);
                }
                if (deathCounter == 3)
                {
                    Destroy(heart1);
                }
                if(deathCounter == 3)
                {
                    gm.Dead();
                }

                break;

            case "Jump":
                rig.AddForce(Vector2.up * jumpPower * 2, ForceMode2D.Impulse);
                jumpCount = 2;
                break;


        }

       
        

    }

    // Trigger (리스폰)
    private void OnTriggerEnter2D(Collider2D collision)
    {
        switch(collision.gameObject.tag)
        {
            case "EndingPoint":
                Destroy(pro4);
                // 게임 끝
                gm.Ending();
                break;

            case "SavePoint":
                string number = collision.gameObject.name.Split('_')[1];
                int index = int.Parse(number);
                if (index > respawnPoints.IndexOf(realRespawnPoint))
                {
                    realRespawnPoint = respawnPoints[index];
                }
                break;

            case "Scene1":
                Destroy(pro1);
                audio2.Play();
                break;

            case "Scene2":
                Destroy(pro2);
                audio2.Play();
                break;

            case "Scene3":
                Destroy(pro3);
                audio2.Play();
                break;
        }
    }




}



