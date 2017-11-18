// #include "defines_buttons.h"

#define BUTTON_PRESSED_PIN_STATE false
#define BUTTON_PRESSED true
#define BUTTONS_COUNT 10

enum BUTTON_NAME {
  BUTTON_LEFT_FIRST_UP,
  BUTTON_LEFT_FIRST_DOWN, 
  BUTTON_RIGHT_FIRST_UP,
  BUTTON_RIGHT_FIRST_DOWN,
  BUTTON_LEFT_LAST_UP,
  BUTTON_LEFT_LAST_DOWN,
  BUTTON_RIGHT_LAST_UP,
  BUTTON_RIGHT_LAST_DOWN,
  BUTTON_MENU_SELECT,
  BUTTON_MENU_OK
};

#define BUTTON_SHIFT_LEFT_FIRST_UP 0
#define BUTTON_SHIFT_LEFT_FIRST_DOWN 1 
#define BUTTON_SHIFT_RIGHT_FIRST_UP 2
#define BUTTON_SHIFT_RIGHT_FIRST_DOWN 3
#define BUTTON_SHIFT_LEFT_LAST_UP 4
#define BUTTON_SHIFT_LEFT_LAST_DOWN 5
#define BUTTON_SHIFT_RIGHT_LAST_UP 6
#define BUTTON_SHIFT_RIGHT_LAST_DOWN 7
#define BUTTON_SHIFT_MENU_SELECT 8
#define BUTTON_SHIFT_MENU_OK 9

struct ButtonState {
  bool state;
  bool last_state;
  bool was_pressed;
  unsigned char  shift_position;
  BUTTON_NAME button_name;
};

