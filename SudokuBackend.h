//
// Created by GigaKloc on 4/22/2026.
//

#ifndef SUDOKU_FRONTEND_H
#define SUDOKU_FRONTEND_H
struct CellGroup {
    int GetData(const int& X, const int& Y);
    void SetData(const int& X,const int& Y, int data);
    std::string ToString();
};

CellGroup GenerateCellGroup();

#endif //SUDOKU_FRONTEND_H