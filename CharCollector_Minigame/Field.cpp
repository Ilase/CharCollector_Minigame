#include "Field.h"

Field::Field()
{
	field.resize(height);
	for (int i = 0; i < height; ++i) field[i].resize(width);

	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; ++j) {
			if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
				field[i][j] = 1;
			}
			else {
				field[i][j] = 0;
			}
			
		}
	}
}

void Field::createPnt(int _cp)
{
	int cnt = 0;
	while (cnt < _cp) {
		int randX = rand() % (height - 1) + 1;
		int randY = rand() % (width - 1)+1;

		field[randX][randY] = 4;
		cnt++;
	}
}
