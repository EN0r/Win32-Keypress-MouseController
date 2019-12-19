Alright this API thing can be used to move the mouse diagonally from one position to another( This function is not accurate and i will
 be working on an better one)
 
 Also it has functionality to detect what keypressed using the win32 KeyboardProc Hook. This could be useful for games / Macro software.
 
 Current functions:
 
 	void initHook(); - This function will initialise the KeyboardProc hook and start it.
	void releaseHook(); - This function Releases the KeyboardProc hook.
  
  bool moveCursorDiagonally(POINT a, float speed,int time); - Returns true if it has sucessfully moved between 2 points. This function takes
  a POINT Datatype for the moveto position and the speed is how fast and the time is how long between each movement as this function
  tries to make the mouse movement look as smooth as possible instead of just suddenly teleporting between 2 spots. WARNING: This function is
  unstable and not accurate. I will be working on a improved version in the future.
  
  
  INFO:
  
  This code is really messy and i will be cleaning it up in the future. 
