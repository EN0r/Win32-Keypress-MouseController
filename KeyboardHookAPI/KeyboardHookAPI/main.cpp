#include "windows.h"
#include <iostream>
#include "mouseHandler.h"
#include "Keyboard.h"

int x;
int y;

int resox1 = 1400 / 2;
int resoy1 = 900 / 2;

POINT CurrentPosition;






int main()
{
	//Initialise a new mouse component

	mouseHandler MouseController;

	Keyboard KeyboardHook;

	KeyboardHook.initHook();

	MSG msg;

	while (GetMessage(&msg, NULL, 0, 0))
	{

	}


	// Main
	//GetCursorPos(&CurrentPosition);
	//std::cout << "What X do you want to move. " << std::endl;
	//std::cin >> x;
	//std::cout << "What Y do you want to move. " << std::endl;
	//std::cin >> y;
	//POINT pos;
	//pos.x = x;
	//pos.y = y;

	//std::cout << CurrentPosition.x << "," << CurrentPosition.y << std::endl;

	//MouseController.moveCursor(pos, 1, 1);

}