using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour
{
    public Transform player;

    public float cameraSpeed;

    public Vector2 areaCenter, areaSize;

    float cameraSizeY, cameraSizeX;

    private void Awake()
    {
        Camera camera = GetComponent<Camera>();
        Rect rect = camera.rect;
        float scaleheight = ((float)Screen.width / Screen.height) / ((float)16 / 9);
        float scalewidth = 1f / scaleheight;
        if(scaleheight < 1)
        {
            rect.height = scaleheight;
            rect.y = (1f - scaleheight) / 2f;
        }
        else
        {
            rect.width = scaleheight;
            rect.x = (1f - scalewidth) / 2f;
        }
        camera.rect = rect;
    }

    // Start is called before the first frame update
    void Start()
    {
        cameraSizeY = Camera.main.orthographicSize;
        cameraSizeX = cameraSizeY * Screen.width / Screen.height;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 target = new Vector3(player.position.x + 1.5f, player.position.y, player.position.z);
        transform.position = Vector3.Lerp(transform.position, target, cameraSpeed * Time.deltaTime);

        float distX = areaSize.x / 2 - cameraSizeX;
        float distY = areaSize.y / 2 - cameraSizeY;

        float clampX = Mathf.Clamp(transform.position.x, areaCenter.x - distX, areaCenter.x + distX);
        float clampY = Mathf.Clamp(transform.position.y, areaCenter.y - distY, areaCenter.y + distY);

        transform.position = new Vector3(clampX, clampY, -10);
    }

    private void OnDrawGizmos()
    {
        // 기즈모 색상 노란색으로
        Gizmos.color = Color.yellow;

        // 카메라 제한 영역 기즈모
        Gizmos.DrawWireCube(areaCenter, areaSize);
    }
}
