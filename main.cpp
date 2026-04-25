#include <iostream>
#include "src/SudokuBackend.h"

int main() {
    CellGroup group = CellGroup::GenerateCellGroup();

    return group.GetData(2,3) + group.GetData(3,3) + group.GetData(4,3) + group.GetData(5,3);
}