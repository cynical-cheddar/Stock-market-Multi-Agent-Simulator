using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
using System.IO;
[Serializable]
public enum Stepmode
{
    Fixed,
    Jitter,
    Random
}
[Serializable]
public enum Allocation
{
    Drip,
    Poisson,
    All
}
[Serializable]
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

    public AudioSource audioSource;
    public AudioClip successSound;
    public AudioClip failureSound;
    public AudioClip loadSound;

    public GameObject viewPort;
    

    List<string> existingSettingsNames = new List<string>();
    List<GameObject> existingSettingsButtons = new List<GameObject>();

    List<GameSettings> loadedGameSettings = new List<GameSettings> ();

    public Text output;

    public GameObject settingsButtonPrefab;
    public GameObject buttonListView;
    public RectTransform content_rect;

    public Text selectedOutput;

    public Button editButton;


    public int heightIncreasePerButton = 100;

    void LoadSettingsToUI(GameSettings settings)
    {

        config_id_field.text = settings.config_id;
        running_time_field.text = settings.running_time.ToString();

        supply_min_field.text = settings.supply_min.ToString();
        supply_max_field.text = settings.supply_max.ToString();
        supply_stepmode_dropdown.value = (int)settings.supply_stepmode;

        demand_min_field.text = settings.demand_min.ToString();
        demand_max_field.text = settings.demand_max.ToString ();
        demand_stepmode_dropdown.value = (int)settings.demand_stepmode;

        assignment_volume_field.text = settings.assignment_volume.ToString();
        assignment_cycle_field.text = settings.assignment_cycle.ToString();

        allocation_dropdown.value = (int)settings.allocation;
    }

    public void ClearOutput()
    {
        output.text = "";
    }

    public void ClearSettingsUI()
    {
        config_id_field.text = "";
        running_time_field.text = "";

        supply_min_field.text = "";
        supply_max_field.text = "";
        supply_stepmode_dropdown.value = 0;

        demand_min_field.text = "";
        demand_max_field.text = ""; 
        demand_stepmode_dropdown.value = 0;

        assignment_volume_field.text = "";
        assignment_cycle_field.text = "";

        allocation_dropdown.value = 0;
    }


    public void ListExistingSettings()
    {
        existingSettingsNames.Clear();
        loadedGameSettings.Clear();
        foreach(GameObject go in existingSettingsButtons)
        {
            Destroy(go);
        }
        foreach (string file in System.IO.Directory.GetFiles(Application.persistentDataPath + "/session_settings/"))
        {
            Debug.Log(file);
            string path = file;
            string ext = Path.GetExtension(path);
            if(ext == ".json") { 
                existingSettingsNames.Add(file);
                Debug.Log("added file: " + file);
            }
            
        }

        int index = 0;

        foreach(string file in existingSettingsNames)
        {
            //Debug.Log(Application.persistentDataPath + "/session_settings/" + file);
            string filePath = file;
            string file_contents = File.ReadAllText(filePath);
            GameSettings settings = JsonUtility.FromJson<GameSettings>(file_contents);
            loadedGameSettings.Add(settings);

            // now create a button to select settings
            GameObject button = Instantiate(settingsButtonPrefab);
            button.transform.SetParent(buttonListView.transform);
            button.GetComponent<SettingsButton>().settingsIndex = index;
            button.GetComponent<SettingsButton>().gameSettingsWriter = this;
            button.GetComponent<Text>().text = settings.config_id;

            content_rect.sizeDelta = new Vector2(content_rect.sizeDelta.x, content_rect.sizeDelta.y + heightIncreasePerButton);
            existingSettingsButtons.Add(button);

            button.GetComponent<RectTransform>().localScale = Vector3.one;

            index++;
        }

    }

    private void Update()
    {
        if(current_settings != null)
        {
            if(current_settings.config_id != null)
            {
                editButton.interactable = true;
            }
        }
    }



    public void EditCurrentSettings()
    {
        if(current_settings.config_id != null)
        {
            LoadSettingsToUI(current_settings);
        }
        
    }


    GameSettings SettingsFromJSON(string json_file_path)
    {
        string file_contents = File.ReadAllText(json_file_path);
        GameSettings settings = JsonUtility.FromJson<GameSettings>(file_contents); 
        return settings;
    }

    public void SetGameSettings(GameSettings settings)
    {
        current_settings = settings;
        selectedOutput.text = current_settings.config_id;

        
    }

    public void ClickSettings(int index)
    {
        
        SetGameSettings(loadedGameSettings[index]);
        audioSource.PlayOneShot(loadSound, 0.5f);

    }
    void Start()
    {
        current_settings = new GameSettings();
        var folder = Directory.CreateDirectory(Application.persistentDataPath + "/session_settings/");
        Debug.Log("created dir: " + folder.ToString());
        ListExistingSettings();
    }

    public void SaveSettings()
    {
        try
        {
            current_settings = new GameSettings();
            // save settings to file config_id.json
            current_settings.config_id = config_id_field.text;
            current_settings.running_time = int.Parse(running_time_field.text);

            // supply
            current_settings.supply_min = int.Parse(supply_min_field.text);
            current_settings.supply_max = int.Parse(supply_max_field.text);

            if (supply_stepmode_dropdown.value == 0)
            {
                current_settings.supply_stepmode = Stepmode.Fixed;
            }
            else if (supply_stepmode_dropdown.value == 1)
            {
                current_settings.supply_stepmode = Stepmode.Jitter;
            }
            else if (supply_stepmode_dropdown.value == 2)
            {
                current_settings.supply_stepmode = Stepmode.Random;
            }

            // demand
            current_settings.demand_min = int.Parse(demand_min_field.text);
            current_settings.demand_max = int.Parse(demand_max_field.text);

            if (demand_stepmode_dropdown.value == 0)
            {
                current_settings.demand_stepmode = Stepmode.Fixed;
            }
            else if (demand_stepmode_dropdown.value == 1)
            {
                current_settings.demand_stepmode = Stepmode.Jitter;
            }
            else if (demand_stepmode_dropdown.value == 2)
            {
                current_settings.demand_stepmode = Stepmode.Random;
            }

            // assignment
            current_settings.assignment_volume = int.Parse(assignment_volume_field.text);
            current_settings.assignment_cycle = int.Parse(assignment_cycle_field.text);

            // convert to json
            string json = JsonUtility.ToJson(current_settings);
            Debug.Log("JSON: " + current_settings.config_id + " " + json);

            System.IO.File.WriteAllText(Application.persistentDataPath + "/session_settings/" + current_settings.config_id + ".json", json);

            audioSource.PlayOneShot(successSound);

            output.text = "Successfully saved settings as: " + current_settings.config_id + ".json";
        }
        catch
        {
            output.text = "Settings parse error. Settings not saved";
            audioSource.PlayOneShot(failureSound);
        }

        // etc CONTINUE LATER
    }
}
