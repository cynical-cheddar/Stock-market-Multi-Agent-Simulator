using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
using System.IO;

public class BotSettingsWriter : MonoBehaviour
{

    [Serializable]
    public class BotSchema
    {
        public string botName;
        public int botQuantity;
    }



    [Serializable]
    public class BotSettings
    {
        public List<BotSchema> botSchemas;
    }



    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
