//
// Created by GigaKloc on 4/22/2026.
//
#pragma once

#ifndef SUDOKU_BACKEND_H
#define SUDOKU_BACKEND_H
struct CellGroup {
private:
    int cellData[9][9] = {};
public:
    int GetData(const int& X, const int& Y) const;
    void SetData(const int& X,const int& Y, int data);
    bool CheckSquare(const int& X,const int& Y) const;
    static CellGroup GenerateCellGroup();
};

#endif //SUDOKU_BACKEND_H