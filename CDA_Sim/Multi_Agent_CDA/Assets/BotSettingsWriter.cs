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
            public int id;
        }




        [Serializable]
        public class BotSettings
        {
            public string trader_config_id;
            public List<BotSchema> botSchemas;
        }

        BotSettings current_bot_settings;
        List<BotSettings> existing_bot_settings_list = new List<BotSettings>();

        List<String> botTypesPaths = new List<String>();
        List<String> botTypes = new List<String>();


        public AudioSource audioSource;
        public AudioClip successSound;
        public AudioClip loadSound;
        public AudioClip failureSound;
        public AudioClip removeTrader;

        public Dropdown botTypesDropdown;
        public InputField quantityInputField;

        public Transform listview;

        public GameObject menuItemPrefab;

        public Text output;

        public InputField trader_config_name_input;

        public GameObject botButtonPrefab;

        public GameObject buttonListView;

        public RectTransform content_rect;

        public int heightIncreasePerButton = 50;

        public Text currentSchemaText;

        int cur_id = 0;

        List<string> existingSchemasNames = new List<string>();
        List<GameObject> existingSchemasButtons = new List<GameObject>();

        // Start is called before the first frame update
        void Awake()
        {
            current_bot_settings = new BotSettings();
            current_bot_settings.botSchemas = new List<BotSchema>();
            var folder = Directory.CreateDirectory(Application.persistentDataPath + "/traders/");
            Debug.Log("created dir: " + folder.ToString());

            var folder2 = Directory.CreateDirectory(Application.persistentDataPath + "/traderSchemas/");
            Debug.Log("created dir: " + folder.ToString());

            LoadExistingBots();
            LoadExistingBotsSchema();
        }

        public void EditCurrentSchema()
        {
            if (current_bot_settings.trader_config_id != null)
            {
                LoadSchemaToUI(current_bot_settings);
            }

        }

        void LoadSchemaToUI(BotSettings settings)
        {

            trader_config_name_input.text = settings.trader_config_id;

            RefreshSchemaView();
        }














        public Button editButton;
        private void Update()
        {
            if (current_bot_settings != null)
            {
                if (current_bot_settings.trader_config_id != null)
                {
                    editButton.interactable = true;
                }
            }
        }


        public void LoadExistingBotsSchema()
        {
            existing_bot_settings_list.Clear();
            existingSchemasNames.Clear();

            foreach (Transform t in buttonListView.transform)
            {
                Destroy(t.gameObject);
            }
            foreach (string file in System.IO.Directory.GetFiles(Application.persistentDataPath + "/traderSchemas/"))
            {
                Debug.Log(file);
                string path = file;
                string ext = Path.GetExtension(path);
                if (ext == ".json")
                {
                    existingSchemasNames.Add(file);
                    Debug.Log("added file: " + file);
                }

            }

            int index = 0;

            foreach (string file in existingSchemasNames)
            {
                //Debug.Log(Application.persistentDataPath + "/session_settings/" + file);
                string filePath = file;
                string file_contents = File.ReadAllText(filePath);
                BotSettings settings = JsonUtility.FromJson<BotSettings>(file_contents);
                existing_bot_settings_list.Add(settings);

                // now create a button to select settings
                GameObject button = Instantiate(botButtonPrefab);
                button.transform.SetParent(buttonListView.transform);
                button.GetComponent<SchemaButton>().settingsIndex = index;
                button.GetComponent<SchemaButton>().botSettingsWriter = this;
                button.GetComponent<Text>().text = settings.trader_config_id;

                content_rect.sizeDelta = new Vector2(content_rect.sizeDelta.x, content_rect.sizeDelta.y + heightIncreasePerButton);
                existingSchemasButtons.Add(button);

                button.GetComponent<RectTransform>().localScale = Vector3.one;

                index++;
            }
        }

        public void ClickSettings(int click_index)
        {
            // load element [click_index] from  existing_bot_settings_list
            try
            {
                current_bot_settings = existing_bot_settings_list[click_index];
                currentSchemaText.text = current_bot_settings.trader_config_id;
                audioSource.PlayOneShot(loadSound, 0.5f);
                output.text = "";
            }
            catch
            {
                audioSource.PlayOneShot(failureSound);
            }
        }


        void LoadExistingBots()
        {
            botTypesDropdown.ClearOptions();

            botTypesPaths.Clear();
            botTypes.Clear();

            foreach (string file in System.IO.Directory.GetFiles(Application.persistentDataPath + "/traders/"))
            {
                Debug.Log(file);
                string path = file;
                string ext = Path.GetExtension(path);
                if (ext == ".py")
                {
                    botTypesPaths.Add(file);
                    Debug.Log("added file: " + file);
                }

            }


            foreach (string file in botTypesPaths)
            {
                //Debug.Log(Application.persistentDataPath + "/session_settings/" + file);
                string filePath = file;
                string botname = Path.GetFileName(filePath);
                botTypes.Add(botname);
            }

            // now load all their names to dropdown
            botTypesDropdown.AddOptions(botTypes);
        }

        public void btn_click_add_bots()
        {
            cur_id = 0;
            BotSettings backup_botSettings = current_bot_settings;
            try
            {
                BotSchema botSchema = new BotSchema();
                botSchema.botName = botTypesDropdown.options[botTypesDropdown.value].text;
                botSchema.botQuantity = int.Parse(quantityInputField.text);
                botSchema.id = cur_id;
                current_bot_settings.botSchemas.Add(botSchema);

                audioSource.PlayOneShot(successSound, 0.5f);

                cur_id++;
            }
            catch
            {
                current_bot_settings = backup_botSettings;
                audioSource.PlayOneShot(failureSound, 0.5f);
            }

            RefreshSchemaView();
        }

        public void RemoveFromSchema(int specified_id)
        {
            int i = 0;
            foreach (BotSchema bs in current_bot_settings.botSchemas)
            {
                if (bs.id == specified_id)
                {
                    break;
                }
                i++;
            }

            // remove at element i
            current_bot_settings.botSchemas.RemoveAt(i);
            audioSource.PlayOneShot(removeTrader, 0.5f);
            // refresh
            RefreshSchemaView();
        }


        void RefreshSchemaView()
        {
            // destroy all gameobjects in listview
            foreach (Transform child in listview)
            {
                Destroy(child.gameObject);
            }
            // create Botsettings menu item for each element in  current_bot_settings.botSchemas
            // set id and text in script

            foreach (BotSchema bs in current_bot_settings.botSchemas)
            {
                GameObject menuItem = Instantiate(menuItemPrefab, listview);
                menuItem.GetComponent<BotSettingMenuItem>().SetupMenuItem(bs.botName, bs.botQuantity, this, bs.id);
            }
        }


        public void ClearUI()
        {
            output.text = "";
            current_bot_settings = new BotSettings();
            RefreshSchemaView();
        }

        // TODO:

        // Load from schema



        public void SaveSchema()
        {
            current_bot_settings.trader_config_id = trader_config_name_input.text;

            if (current_bot_settings.trader_config_id != "")
            {
                try
                {
                    string json = JsonUtility.ToJson(current_bot_settings);
                    Debug.Log("JSON: " + current_bot_settings.trader_config_id + " " + json);

                    System.IO.File.WriteAllText(Application.persistentDataPath + "/traderSchemas/" + current_bot_settings.trader_config_id + ".json", json);

                    audioSource.PlayOneShot(successSound);

                    output.text = "Successfully saved settings as: " + current_bot_settings.trader_config_id + ".json";
                }
                catch
                {
                    output.text = "file write failure";
                    audioSource.PlayOneShot(failureSound);
                }
            }
            else
            {
                output.text = "config name empty";
                audioSource.PlayOneShot(failureSound);
            }
        }


    }

