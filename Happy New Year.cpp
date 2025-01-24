#include <iostream>
#include <windows.h>
using namespace std;

int set_position(HANDLE output, int x, int y)
{
	COORD position;
	
	position.X = x;
	position.Y = y;
	
	SetConsoleCursorPosition(output, position);
}

int middle()
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(output, &info);
	
	int size_x = info.dwSize.X, size_y = info.dwSize.Y;
	
	int x = size_x / 2 - 4;
	//一半 - 4(有 4 個字，中文一個字佔兩格) 
	
	set_position(output, x, 12);
	
	cout << "新";
	Sleep(500); 
	cout << "年";
	Sleep(500);  
	cout << "快";
	Sleep(500); 
	cout << "樂";
	Sleep(500);
}

int color()
{
	int i;
	
	while(true) {
		for(i=0;i<20;i++)
	  		system("color 74");
	  	Sleep(150);
	   	for(i=0;i<20;i++)
	  		system("color 47");
	  	Sleep(150);
  	}
}

int main()
{
	middle();
	
	color();

	return 0;
}
