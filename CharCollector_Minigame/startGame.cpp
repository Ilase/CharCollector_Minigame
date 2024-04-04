#include "startGame.h"

startGame::startGame()
{
	plr = Player(20,20);
	fld = Field();
	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
}

void startGame::printField()
{
	SetConsoleCursorPosition(hStdOut, { 0,0 });
	for (int i = 0; i < fld.height; ++i) {
		for (int j = 0; j < fld.width; ++j) {
			
			if(fld.field[i][j] == 1) {
				std::cout << '#';
			}
			else if (fld.field[i][j] == 4) {
				std::cout << '$';
			}
			else if (fld.field[i][j] == 5) {
				std::cout << '-';
			}
			else {
				std::cout << ' ';
			}
						
		}
		std::cout << std::endl;
	}
}

bool startGame::start()
{
	fld.createPnt(20);
	
	printField();
	fld.field[20][20] = 5;
	plr.printPlayer(hStdOut);
	
	while (true) {
		char _key;
		printField();
		updateScore();
		plr.printPlayer(hStdOut);
		_key = _getch();
		plr.movePlayer(_key, hStdOut, fld);
		
	}

	return false;
}

void startGame::updateScore()
{
	SetConsoleCursorPosition(hStdOut, {85,4});
	std::cout << "Score: " << plr.getScore();
}
