#pragma once
#include "lib.h"
struct Field
{

	
	short width = 60, height = 60;
	char fCh = '#';
	std::vector<std::vector<int>> field;

	Field();
	
	void createPnt(int);


};

