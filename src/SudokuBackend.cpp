#include <iostream>
#include "random"

#include "../SudokuBackend.h"
#define GAME_DIFF 6


int CellGroup::GetData(const int &X, const int &Y) const {
	return cellData[Y][X];
}

void CellGroup::SetData(const int &X, const int &Y, int data) {
	cellData[Y][X] = data;
}

bool CellGroup::CheckSquare(const int &X, const int &Y) const {
	if (X + 2 >= 9 || Y + 2 >= 9) return false;
	return cellData[Y][X]
	       != cellData[Y+1][X]
	       != cellData[Y+2][X]
	       != cellData[Y][X+1]
	       != cellData[Y+1][X+1]
	       != cellData[Y+2][X+1]
	       != cellData[Y][X+2]
	       != cellData[Y+1][X+2]
	       != cellData[Y+2][X+2];
}

CellGroup CellGroup::GenerateCellGroup() {
	CellGroup group;

	for (size_t Y = 0; Y < 9; Y++)
	{
		for (size_t X = 0; X < 9; X++)
		{

		}
	}

	return group;
}

