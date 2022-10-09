using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using GoogleMobileAds.Api;

public class SettingManager : MonoBehaviour
{
    // 광고
    private InterstitialAd interstitial;
    public Canvas myCanvas;

    /*private void RequestInterstitial()
    {
#if UNITY_ANDROID
         string adUnitId = "ca-app-pub-3940256099942544/1033173712"; // 테스트 코드
        //string adUnitId = "ca-app-pub-7896012251876350/9767502519";
#elif UNITY_IPHONE
        string adUnitId = "ca-app-pub-3940256099942544/4411468910";
#else
        string adUnitId = "unexpected_platform";
#endif

        // Initialize an InterstitialAd.
        this.interstitial = new InterstitialAd(adUnitId);

        // Called when the ad is closed.
        this.interstitial.OnAdClosed += HandleOnAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the interstitial with the request.
        this.interstitial.LoadAd(request);


    }*/

    public void HandleOnAdClosed(object sender, System.EventArgs args)
    {
        SceneManager.LoadScene(1);
        player.transform.position = new Vector3(-18.62f, -3.94f, 10);
    }


    public GameObject SettingView;
    public Player player;

    AudioSource audio;

    public GameManager gm;

    // Transform transform;
    

    // public Player player;

    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1;
        audio = transform.GetChild(0).GetComponent<AudioSource>();

        

        // transform = GetComponent<Transform>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ClickSettting()
    {
        if(gm.isPlay == true)
        {
            audio.Play();
            SettingView.SetActive(true);
            Time.timeScale = 0;
        }

        


    }

    public void ClickPlay()
    {
        audio.Play();
        SettingView?.SetActive(false);
        Time.timeScale = 1;
    }

    public void ClickRestart()
    {
        audio.Play();
        /*RequestInterstitial();
        StartCoroutine(showInterstitial());

        IEnumerator showInterstitial()
        {
            while(!this.interstitial.IsLoaded())
            {
                yield return new WaitForSeconds(0.2f);
            }
            this.interstitial.Show();
            myCanvas.sortingOrder = -1;
        }*/
        


        SceneManager.LoadScene(1);
        player.transform.position = new Vector3(-18.62f, -3.94f, 10);
    }

    public void ClickHome()
    {
        audio.Play();
        SceneManager.LoadScene(0);
    }

}
