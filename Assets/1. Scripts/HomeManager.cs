using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HomeManager : MonoBehaviour
{
    // 셋팅 뷰
    public GameObject SettingView;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // 게임 시작 버튼
    public void ClickPlay()
    {
        SceneManager.LoadScene(1);
    }

    // 설정 버튼
    public void ClickSetting()
    {
        SettingView.SetActive(true);
    }

    // 설정 뷰 닫기
    public void ClickSettingClose()
    {
        SettingView.SetActive(false);
    }

    // 게임 종료 버튼
    public void ClickQuit()
    {

#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
        Application.Quit();
#endif
    }






}
