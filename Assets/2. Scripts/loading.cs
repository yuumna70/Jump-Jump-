using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class loading : MonoBehaviour
{
    private float current;
    private float finish;

    [SerializeField] Slider slider = null;
    
    public GameObject player;

    // Start is called before the first frame update
    void Start()
    {
        current = player.gameObject.transform.position.x;
        finish = 785;
    }

    // Update is called once per frame
    void Update()
    {
        Loading();
    }

    void Loading()
    {
        current = player.gameObject.transform.position.x;
        if (current < finish)
        {
            Set_FillAmount(current / finish);

        }
        else
        {
            End_Loading();
        }
    }

    void End_Loading()
    {
        Set_FillAmount(1);
    }

    private void Set_FillAmount(float _value)
    {
        slider.value = _value;
    }
}
