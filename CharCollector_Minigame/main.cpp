#include "lib.h"
#include "startGame.h"

//void GoToXY(short x, short y)
//{
//	SetConsoleCursorPosition(hStdOut, { x, y });
//}

int main() {
	srand(unsigned int(time(NULL)));
	startGame MainApp;
	MainApp.start();
}