#include <iostream>
#include <vector>
#include <cstdlib>	
#include <ctime>   
#include "String"

#define GAME_DIFF 6

struct CellGroup {
private:
	int cellData[9][9];

public:
	int GetData(const int& X, const int& Y) {
		return cellData[Y][X];
	}

	void SetData(const int& X,const int& Y, int data) {
		cellData[Y][X] = data;
	}

	std::string ToString() {
		std::string out; 

		for (size_t Y = 0; Y < 9; Y++)
		{
			for (size_t X = 0; X < 9; X++)
			{
				out += std::to_string(cellData[Y][X]);
			}

			out += "\n";
		}

		return out;
	}
};

CellGroup GenerateCellGroup() {
	CellGroup group;

	for (size_t Y = 0; Y < 9; Y++)
	{
		for (size_t X = 0; X < 9; X++)
		{
			if (std::rand() % GAME_DIFF <= GAME_DIFF - 2) {
				
			}
		}
	}

	return group;
}



int main()
{
	std::srand(std::time(0));

	std::cout << std::rand() % 9 << "\n";

	CellGroup board = GenerateCellGroup();

	std::cout << board.ToString();

}

