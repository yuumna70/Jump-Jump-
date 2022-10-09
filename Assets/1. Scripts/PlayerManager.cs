using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    Rigidbody2D rig;

    // 캐릭터의 이동 제한 속도
    public float maxSpeed;

    // 캐릭터의 점프하는 힘
    public float jumpPower;

    // 오른쪽 / 왼쪽 bool 저장
    public bool LeftMode = false;
    public bool RightMode = false;

    // 점프
    public bool isGround;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(LeftMode == true)
        {
            // 왼쪽쪽 방향으로 힘 가하기
            rig.AddForce(Vector2.left, ForceMode2D.Impulse);

            // x 속도 제한 값 계산
            float xClamp = Mathf.Clamp(-rig.velocity.x, -maxSpeed, maxSpeed);

            // 제한 값 적용
            rig.velocity = new Vector2(xClamp, rig.velocity.y);
        }
        else if(RightMode == true)
        {
            // 오른쪽 방향으로 힘 가하기
            rig.AddForce(Vector2.right, ForceMode2D.Impulse);

            // x 속도 제한 값 계산
            float xClamp = Mathf.Clamp(rig.velocity.x, -maxSpeed, maxSpeed);

            // 제한 값 적용
            rig.velocity = new Vector2(xClamp, rig.velocity.y);
        }
    }

    // 왼쪽 이동 버튼
    public void LeftBtn()
    {
        LeftMode = true;
    }

    // 오른쪽 이동 버튼
    public void RightBtn()
    {
        RightMode = true;
    }

    // 점프 버튼 
    public void JumpBtn()
    {
        if(isGround)
        {
            // 순간적으로 위로 힘을 가하기 
            rig.AddForce(Vector2.up * jumpPower, ForceMode2D.Impulse);    // Force = 지속적으로 가해짐  / Impulse = 순간적
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        switch(collision.gameObject.tag)
        {
            case "Ground":
                isGround = true;
                break;
        }
    }

}
