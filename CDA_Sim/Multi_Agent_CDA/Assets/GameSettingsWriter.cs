using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum Stepmode
{
    Fixed,
    Jitter,
    Random
}

public enum Allocation
{
    Drip,
    Poisson,
    All
}

public class GameSettings
{
    public string config_id;
    public int running_time;

    public int supply_min;
    public int supply_max;
    public Stepmode supply_stepmode;

    public int demand_min;
    public int demand_max;
    public Stepmode demand_stepmode;

    public string offset_function;

    public int assignment_volume;
    public int assignment_cycle;

    public Allocation allocation;
}






public class GameSettingsWriter : MonoBehaviour
{

    public GameSettings current_settings;

    public InputField config_id_field;
    public InputField running_time_field;

    public InputField supply_min_field;
    public InputField supply_max_field;
    public Dropdown supply_stepmode_dropdown;

    public InputField demand_min_field;
    public InputField demand_max_field;
    public Dropdown demand_stepmode_dropdown;

    public InputField assignment_volume_field;
    public InputField assignment_cycle_field;

    public Dropdown allocation_dropdown;

    public void LoadSettings(string settingsName)
    {
        // load json

        // case to GameSettings

        // update UI
    }
    void Start()
    {
        current_settings = new GameSettings();
    }

    public void SaveSettings()
    {
        // save settings to file config_id.json
        current_settings.config_id = config_id_field.text;
        // etc CONTINUE LATER
    }
}
