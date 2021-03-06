#define BTN_ROTA_PIN GPIO12
#define BTN_ROTB_PIN GPIO15

#define BTN_ROTA_PORT GPIOB
#define BTN_ROTB_PORT GPIOA

#define RADIO_INT_PIN GPIO15
#define RADIO_INT_PORT GPIOB

#define BTN_ROTM_PORT GPIOB
#define BTN_ROTM_PIN GPIO14

#define BTN_MENU_PORT GPIOB
#define BTN_MENU_PIN GPIO6

#define BTN_PST_PORT GPIOA
#define BTN_PST_PIN GPIO5

#define LED_MENU_PORT GPIOC
#define LED_MENU_PIN GPIO14

#define LED_PST_PORT GPIOA
#define LED_PST_PIN GPIO6

#define LED_RED_PORT GPIOB
#define LED_RED_PIN GPIO7
#define LED_GRN_PORT GPIOA
#define LED_GRN_PIN GPIO7

#define DEBOUNCE_INTERVAL_MS 20
#define PRESET_HOLD_THRES 1200

//flash storage section
#define FLASH_STORAGE_ADDR ((uint32_t)0x0800f800)
#define FLASH_STORAGE_LEN 0x800
#define FLASH_PAGE_SIZE 0x800
