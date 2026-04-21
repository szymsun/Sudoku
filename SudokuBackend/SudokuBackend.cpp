#include <iostream>
#include <vector>


struct CellGroup {
private:
	int cellData[3][3];

public:
	int GetData(const int& X, const int& Y) {
		return cellData[Y][X];
	}

	void SetData(const int& X,const int& Y, int data) {
		cellData[Y][X] = data;
	}
};

CellGroup GenerateCellGroup() {
	CellGroup group;

	for (size_t Y = 0; Y < 3; Y++)
	{
		for (size_t X = 0; X < 3; X++)
		{
			group.SetData(X,Y,-1);
		}
	}

	return group;
}

int main()
{
	std::vector<std::vector<CellGroup>> sheet = {
												{GenerateCellGroup()},
												{GenerateCellGroup()},
												{GenerateCellGroup()},
	};

}

