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

    // �޴� ��ư
    public void ClickMenu()
    {
        MenuView.SetActive(true);
        Time.timeScale = 0;
    }

    // �̾��ϱ� ��ư
    public void ClickPlay()
    {
        MenuView.SetActive(false);
        Time.timeScale = 1;
    }

    // ����� ��ư
    public void ClickRestart()
    {
        SceneManager.LoadScene(1);
        Time.timeScale = 1;
    }

    // Ȩ ��ư
    public void ClickHome()
    {
        SceneManager.LoadScene(0);
    }




}
