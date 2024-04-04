#include "Player.h"





Player::Player()
{
	x = 0;
	y = 0;
	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
}

Player::Player(short _x,short _y)
{
	x = _x; y = _y;
	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
}

char Player::getPlrCh()
{
	return this->pCh;
}

void Player::movePlayer(char dir, HANDLE hstd, Field& _f)
{
	
	switch (dir)
	{
	case 72:
		
		if (_f.field[y - 1][x] == 0 || _f.field[y - 1][x] == 4) {
			SetConsoleCursorPosition(hstd, { x,y });
			std::cout << " ";
			y--;
			if (_f.field[y][x] == 4) {
				score = score + 1;
				
			}
			_f.field[y][x] = 5;
			_f.field[y + 1][x] = 0;
		}
		
		break;
	case 80:
		if (_f.field[y + 1][x] == 0 || _f.field[y + 1][x] == 4) {
			SetConsoleCursorPosition(hstd, { x,y });
			std::cout << " ";
			y++;
			if (_f.field[y][x] == 4) {
				++score;

			}
			_f.field[y][x] = 5;
			_f.field[y - 1][x] = 0;
		}
		
		break;
	case 75:
		if (_f.field[y][x - 1] == 0 || _f.field[y][x - 1] == 4) {
			SetConsoleCursorPosition(hstd, { x,y });
			std::cout << " ";
			x--;
			if (_f.field[y][x] == 4) {
				++score;

			}
			_f.field[y][x] = 5;
			_f.field[y][x + 1] = 0;


		}
		
		break;
	case 77:
		if (_f.field[y][x + 1] == 0 || _f.field[y][x + 1] == 4) {
			SetConsoleCursorPosition(hstd, { x,y });
			std::cout << " ";
			x++;
			if (_f.field[y][x] == 4) {
				++score;
				
			}
			
			_f.field[y][x] = 5;
			_f.field[y][x - 1] = 0;


			
		}
		break;
	case 13:
		if (score != 0) {
			_f.field[y - 1][x] = 5;
			_f.field[y][x] = 1;
			y--;
			score--;

			
		}
		break;
	case 27:
		exit(0);
		break;
	default:
		break;
		
	}
	
	
}

const void Player::printPlayer(HANDLE hstd)
{
	SetConsoleCursorPosition(hstd, { x,y });
	std::cout << pCh;
}

unsigned int Player::getScore()
{
	return score;
}
