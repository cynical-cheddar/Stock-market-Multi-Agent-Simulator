using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class InitMenu : MonoBehaviour
{

    public string loadSceneName = "";


    public AudioSource audioSource;
    public AudioClip beep_click;



    public void LoadScene()
    {
        SceneManager.LoadScene(loadSceneName);
    }

    public void SetMobileTrue()
    {
        FindObjectOfType<PersistentSettings>().mobileClient = true;
        audioSource.PlayOneShot(beep_click);
    }

    public void SetPCTrue()
    {
        FindObjectOfType<PersistentSettings>().mobileClient = false;
        audioSource.PlayOneShot(beep_click);
    }
}
