using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainManager : MonoBehaviour
{
    public GameObject MenuView;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // 메뉴 버튼
    public void ClickMenu()
    {
        MenuView.SetActive(true);
        Time.timeScale = 0;
    }

    // 이어하기 버튼
    public void ClickPlay()
    {
        MenuView.SetActive(false);
        Time.timeScale = 1;
    }

    // 재시작 버튼
    public void ClickRestart()
    {
        SceneManager.LoadScene(1);
        Time.timeScale = 1;
    }

    // 홈 버튼
    public void ClickHome()
    {
        SceneManager.LoadScene(0);
    }




}
