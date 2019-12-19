#include "mouseHandler.h"

int resox = 1400 / 2;
int resoy = 900 / 2;

bool mouseHandler::moveCursorDiagonally(POINT newPos, float speed, int time) // MoveCursor is for smooth action.
{


	POINT CurrentPosition;
	if (GetCursorPos(&CurrentPosition))
	{
			
		int Magnitude = ceil(sqrt((pow((newPos.x - CurrentPosition.x), 2)) + (pow((newPos.y - CurrentPosition.y), 2))));
		int e = 0;
		std::cout << Magnitude << std::endl;

		//Magnitude = (Magnitude / 100);

		for (e; e < Magnitude; e++)
		{
			
			
			Sleep(time);

			// Detect what corner screen the mouse is in. it can be split in top left top right bot left and bot right

			if (newPos.x > CurrentPosition.x&& newPos.y > CurrentPosition.y)
			{

			

				if (CurrentPosition.x > newPos.x)
				{
					GetCursorPos(&CurrentPosition);



					int movex = CurrentPosition.x + speed;
					SetCursorPos(movex, CurrentPosition.y);
				}
				if (CurrentPosition.y > newPos.y)
				{
					GetCursorPos(&CurrentPosition);
					int movey = CurrentPosition.y + speed;
					SetCursorPos(CurrentPosition.x, movey);
				}
			}

			if (newPos.x < CurrentPosition.x && newPos.y > CurrentPosition.y)
			{

			

				if (CurrentPosition.x > newPos.x)
				{
					GetCursorPos(&CurrentPosition);



					int movex = CurrentPosition.x - speed;
					SetCursorPos(movex, CurrentPosition.y);
				}
				if (CurrentPosition.y < newPos.y)
				{
					GetCursorPos(&CurrentPosition);
					int movey = CurrentPosition.y + speed;
					SetCursorPos(CurrentPosition.x, movey);
				}

			}

			if (newPos.x > CurrentPosition.x&& newPos.y < CurrentPosition.y)
			{

				

				if (CurrentPosition.x < newPos.x)
				{
					GetCursorPos(&CurrentPosition);



					int movex = CurrentPosition.x + speed;
					SetCursorPos(movex, CurrentPosition.y);
				}

				if (CurrentPosition.y > newPos.y)
				{
					GetCursorPos(&CurrentPosition);
					int movey = CurrentPosition.y + speed;
					SetCursorPos(CurrentPosition.x, movey);
				}

			}

			if (newPos.x < CurrentPosition.x && newPos.y< CurrentPosition.y)
			{

				
				if (CurrentPosition.x > newPos.x)
				{
					GetCursorPos(&CurrentPosition);



					int movex = CurrentPosition.x - speed;
					SetCursorPos(movex, CurrentPosition.y);
				}

				if (CurrentPosition.y > newPos.y)
				{
					GetCursorPos(&CurrentPosition);
					int movey = CurrentPosition.y - speed;
					SetCursorPos(CurrentPosition.x, movey);
				}
				

			}

			

			// y pos 

			

			

		}

	}
	else
	{

		// didnt work.

		return false;

	}

	

	return true;

}