using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SchemaButton : MonoBehaviour
{
    public BotSettingsWriter botSettingsWriter;

    public int settingsIndex = 0;

    public void Click()
    {
        botSettingsWriter.ClickSettings(settingsIndex);
    }
}
