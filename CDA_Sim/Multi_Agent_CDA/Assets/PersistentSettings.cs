using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PersistentSettings : MonoBehaviour
{
    public bool mobileClient = false;


    private void Start()
    {
        DontDestroyOnLoad(gameObject);
    }


}
