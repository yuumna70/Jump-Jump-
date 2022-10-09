using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Heart : MonoBehaviour
{
    public GameObject heart1;
    public GameObject heart2;
    public GameObject heart3;

    private GameObject gameOver;
    int deathCounter;

    private void Awake()
    {
        heart1 = GameObject.Find("HeartContainer_1");
        heart1 = GameObject.Find("HeartContainer_2");
        heart1 = GameObject.Find("HeartContainer_3");

        
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        Vector3 respawner = new Vector3(0, 0, 0);

        if (collision.collider.gameObject.CompareTag("RespawnTrigger"))
        {
            deathCounter++;
            transform.position = respawner;
        }

        if (deathCounter == 1)
        {
            Destroy(heart1);
        }
        if (deathCounter == 2)
        {
            Destroy (heart2);
        }
        if(deathCounter == 3)
        {
            Destroy(heart3);
        }

        if(deathCounter == 3)
        {
            Destroy(gameObject);
            Instantiate(gameOver, respawner, Quaternion.identity);
        }

    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
