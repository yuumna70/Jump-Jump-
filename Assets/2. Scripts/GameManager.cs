using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public GameObject EndingView;
    public GameObject DeadView;

    [HideInInspector]
    public bool isPlay;

    // 게임 시작 전 이미지
    public Image start;
    public Sprite[] starts;

    // 오디오
    AudioSource audio;
    

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(BeforeStart());

        audio = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Ending()
    {
        EndingView.SetActive(true);
        isPlay = false;
        Time.timeScale = 0;
    }

    public void Dead()
    {
        DeadView.SetActive(true);
        isPlay = false;
        Time.timeScale = 0;
    }

    IEnumerator BeforeStart()
    {
        yield return new WaitForSeconds(2);
        start.sprite = starts[0];
        yield return new WaitForSeconds(1);
        //start.sprite = starts[1];
        
        audio.Play();

        start.gameObject.SetActive(false);

        isPlay = true;
    }

}
