using System.Collections;
using System.Collections.Generic;
using UnityEngine;


    public class SettingsButton : MonoBehaviour
    {
        public GameSettingsWriter gameSettingsWriter;

        public int settingsIndex = 0;

        public void Click()
        {
            gameSettingsWriter.ClickSettings(settingsIndex);
        }
}
