using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace Photon.Pun.Demo.Asteroids

{
    public class SchemaButton : MonoBehaviour
    {
        public BotSettingsWriter botSettingsWriter;

        public int settingsIndex = 0;

        public void Click()
        {
            botSettingsWriter.ClickSettings(settingsIndex);
        }
    }
}
