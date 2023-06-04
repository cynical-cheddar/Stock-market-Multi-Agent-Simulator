using System.Collections;
using System.Collections.Generic;
using UnityEngine;


    public class SessionSettingsManager : MonoBehaviour
    {

        public GameObject sessionSettingsPrefab;
        GameObject currentSessionSettings;
        // Start is called before the first frame update
        public void CreateSessionSettings()
        {
            SessionSettings[] sessionSettings = FindObjectsOfType<SessionSettings>();
            foreach (SessionSettings ss in sessionSettings)
            {
                Destroy(ss.gameObject);
            }
            currentSessionSettings = Instantiate(sessionSettingsPrefab);
        }

        public void DeleteSessionSettings()
        {
            SessionSettings[] sessionSettings = FindObjectsOfType<SessionSettings>();
            foreach (SessionSettings ss in sessionSettings)
            {
                Destroy(ss.gameObject);
            }
        }


    }
