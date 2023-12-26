#ifndef Board_H
#define Board_H

#include <bits/stdc++.h>
using namespace std;

class Board
{

private:
    int size;
    vector<vector<char>> board;

public:
    Board(int size);
    void display();
    bool isFull();                                 // to check if the board is full or not                               // if the board is full
    bool placeMove(int row, int col, char symbol); // to place the symbol in position
    bool checkWin(char symbol);                    // check if the winner
};

#endif