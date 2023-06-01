using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BotSettingMenuItem : MonoBehaviour
{

    public Text traderName;
    public Text traderQuantity;
    public int id;
    BotSettingsWriter botSettingsWriter;
    // Start is called before the first frame update
    public void SetupMenuItem(string name, int quantity, BotSettingsWriter settingsWriter, int id_local)
    {
        traderName.text = name;
        traderQuantity.text = quantity.ToString();
        botSettingsWriter = settingsWriter;
        id = id_local;
    }

    public void RemoveFromSchema()
    {
        botSettingsWriter.RemoveFromSchema(id);
    }
}
