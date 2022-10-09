using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HomeManager : MonoBehaviour
{
    // ���� ��
    public GameObject SettingView;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // ���� ���� ��ư
    public void ClickPlay()
    {
        SceneManager.LoadScene(1);
    }

    // ���� ��ư
    public void ClickSetting()
    {
        SettingView.SetActive(true);
    }

    // ���� �� �ݱ�
    public void ClickSettingClose()
    {
        SettingView.SetActive(false);
    }

    // ���� ���� ��ư
    public void ClickQuit()
    {

#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
        Application.Quit();
#endif
    }






}
