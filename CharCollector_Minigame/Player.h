#pragma once
#include "lib.h"
#include "Field.h"
class Player
{	
	short x, y;
	char pCh = '%';
	unsigned int score = 0;
	HANDLE hStdOut;
public:
	Player();
	Player(short, short);
	
	char getPlrCh();
	void movePlayer(char, HANDLE, Field&);
	const void printPlayer(HANDLE);
	unsigned int getScore();

};

