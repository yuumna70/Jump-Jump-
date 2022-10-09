using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainManager : MonoBehaviour
{
    public GameObject HelpView;
    public GameObject HelpView2;
    public GameObject HeartView;
    public GameObject SoundView;

    // �����
    public GameObject dont;

    // ����
    [SerializeField] Slider volumeSlider;
    [SerializeField] Slider volumeSlider2;

    AudioSource audio;


    private void Awake()
    {
        DontDestroyOnLoad(dont);
        GameObject[] audios = GameObject.FindGameObjectsWithTag("Audio");
        

        if (audios.Length >= 2)
        {
            Destroy(audios[1]);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        audio = transform.GetChild(0).GetComponent<AudioSource>();

        /*// ����
        if(!PlayerPrefs.HasKey("musicVolume"))
        {
            PlayerPrefs.SetFloat("musicVolume", 1);
            Load();
        }
        else
        {
            Load();
        }

        if (!PlayerPrefs.HasKey("musicVolume2"))
        {
            PlayerPrefs.SetFloat("musicVolume2", 1);
            Load2();
        }
        else
        {
            Load2();
        }*/
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // ���� 
    public void ClickStart()
    {
        audio.Play();
        SceneManager.LoadScene(1);
    }

    // ����
    public void ClickHelp()
    {
        audio.Play();
        HelpView.SetActive(true);
        Time.timeScale = 0;
    }

   /* // ���Ұ�
    public void ClickSound()
    {
        audio.Play();
        SoundView.SetActive(true);
        Time.timeScale = 0;
    }


    // ����
    public void ChangeVolume()
    {
        AudioListener.volume = volumeSlider.value;
        Save();
    }

    private void Load()
    {
        volumeSlider.value = PlayerPrefs.GetFloat("musicVolume");
    }

    private void Save()
    {
        PlayerPrefs.SetFloat("musicVolume", volumeSlider.value);
    }

    public void ChangeVolume2()
    {
        AudioListener.volume = volumeSlider2.value;
        Save2();
    }

    private void Load2()
    {
        volumeSlider2.value = PlayerPrefs.GetFloat("musicVolume2");
    }

    private void Save2()
    {
        PlayerPrefs.SetFloat("musicVolume2", volumeSlider2.value);
    }*/

    // ����
    public void ClickHeart()
    {
        audio.Play();
        HeartView.SetActive(true);
        
        Time.timeScale = 0;
    }

    

    // HelpView2�� �Ѿ
    public void ClickBtn()
    {
        audio.Play();
        HelpView.SetActive(false);
        HelpView2.SetActive(true);
        Time.timeScale = 0;
    }

    // HelpView ����
    public void ClickOkay()
    {
        audio.Play();
        HelpView.SetActive(false);
        Time.timeScale = 1;
    }

    public void ClickBtn2()
    {
        audio.Play();
        HelpView2.SetActive(false);
        HelpView.SetActive(true);
        Time.timeScale = 0;
    }

    public void ClickOkay2()
    {
        audio.Play();
        HelpView2.SetActive(false);
        Time.timeScale = 1;
    }

    // ��Ʈ�� �ݱ�
    public void ClickOkay3()
    {
        audio.Play();
        HeartView.SetActive(false);
        Time.timeScale = 1;
    }

    // ����� �ݱ�
    public void ClickOkay4()
    {
        audio.Play();
        SoundView.SetActive(false);
        Time.timeScale = 1;
    }

    // ����
    public void ClickQuit()
    {
        audio.Play();

#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
        Application.Quit();
#endif
    }














}
