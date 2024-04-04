#pragma once
#include "Field.h"
#include "Player.h"
class startGame
{
	Player plr;
	Field fld;
	HANDLE hStdOut;
	

public:
	startGame();
	void printField();
	bool start();
	void updateScore();
};

