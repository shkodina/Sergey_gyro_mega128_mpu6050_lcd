// #include "buttons.h"
#ifndef MY_BUTTONS_H
#define MY_BUTTONS_H

#include "buttons_defines.h"
#include <Arduino.h>

class Buttons {
public:
	Buttons();
	void Init();
	uint16_t Update();
	bool WasButtonPressed(int num);
	unsigned char GetCount();
	BUTTON_NAME GetPressedButtonName(int num);
private:
	ButtonState buttons[BUTTONS_COUNT];
};

extern Buttons* g_buttons_p;
#endif
