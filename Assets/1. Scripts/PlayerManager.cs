using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    Rigidbody2D rig;

    // ĳ������ �̵� ���� �ӵ�
    public float maxSpeed;

    // ĳ������ �����ϴ� ��
    public float jumpPower;

    // ������ / ���� bool ����
    public bool LeftMode = false;
    public bool RightMode = false;

    // ����
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
            // ������ �������� �� ���ϱ�
            rig.AddForce(Vector2.left, ForceMode2D.Impulse);

            // x �ӵ� ���� �� ���
            float xClamp = Mathf.Clamp(-rig.velocity.x, -maxSpeed, maxSpeed);

            // ���� �� ����
            rig.velocity = new Vector2(xClamp, rig.velocity.y);
        }
        else if(RightMode == true)
        {
            // ������ �������� �� ���ϱ�
            rig.AddForce(Vector2.right, ForceMode2D.Impulse);

            // x �ӵ� ���� �� ���
            float xClamp = Mathf.Clamp(rig.velocity.x, -maxSpeed, maxSpeed);

            // ���� �� ����
            rig.velocity = new Vector2(xClamp, rig.velocity.y);
        }
    }

    // ���� �̵� ��ư
    public void LeftBtn()
    {
        LeftMode = true;
    }

    // ������ �̵� ��ư
    public void RightBtn()
    {
        RightMode = true;
    }

    // ���� ��ư 
    public void JumpBtn()
    {
        if(isGround)
        {
            // ���������� ���� ���� ���ϱ� 
            rig.AddForce(Vector2.up * jumpPower, ForceMode2D.Impulse);    // Force = ���������� ������  / Impulse = ������
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
