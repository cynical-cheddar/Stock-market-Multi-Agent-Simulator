using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LOB_ReaderTest : MonoBehaviour
{

    public Text myText;
    public BSE bse;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        myText.text = bse.synchronised_LOB_JSON;
    }
}
