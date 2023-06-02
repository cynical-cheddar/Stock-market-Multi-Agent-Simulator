using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Photon.Pun.Demo.Asteroids

{
    public class SettingsButton : MonoBehaviour
    {
        public GameSettingsWriter gameSettingsWriter;

        public int settingsIndex = 0;

        public void Click()
        {
            gameSettingsWriter.ClickSettings(settingsIndex);
        }
    }
}
