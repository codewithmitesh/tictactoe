#include "Board.h"

#include <bits/stdc++.h>
using namespace std;

Board::Board(int n) : size(n), board(n, vector<char>(n, ' ')) {}

void Board::display()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << " " << board[i][j];
            if (j < size - 1)
                cout << " |";
        }
        cout << "\n";
        if (i < size - 1)
        {
            for (int i = 0; i < size; i++)
            {
                cout << "------";
            }
            cout << "\n";
        }
    }
}

bool Board::isFull()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == ' ')
            {
                return false;
            }
        }
    }
    return true;
}

// function checks if we can put the perticular symbol in this position or not and if we can then we simply place this symbol
bool Board::placeMove(int row, int col, char symbol)
{
    if (row < 0 || col >= size || row >= size || col < 0 || board[row][col] != ' ')
    {
        return false;
    }

    board[row][col] = symbol;
    return true;
}

// to check if the perticular symbol wins or not
/**
 * we have 8 cases 3 rows and 3 cols = 6
 * so we first check each rows and col simultaneously (together)
 * with 2 loops we are checking the ith row and colunm simultaneously
 * and 2 diagonal - 1 diagonal and 1 antidiagonal so we check them saparate
 */

bool Board::checkWin(char symbol)
{

    // we have to check 6 time so here
    for (int i = 0; i < size; i++)
    {
        bool rowWin = true;
        bool colWin = true;

        for (int j = 0; j < size; j++)
        {
            // checking i th row
            if (board[i][j] != symbol)
            {
                rowWin = false;
            }
            // checking i th column
            if (board[j][i] != symbol)
            {
                colWin = false;
            }
        }
        if (rowWin || colWin)
            return true;
    }
    // now checking two diagonals
    bool mainDiagonal = true;
    bool antiDiagonal = true;
    for (int i = 0; i < size; i++)
    {
        // checking mainDiagonal
        if (board[i][i] != symbol)
            mainDiagonal = false;
        if (board[i][size - i - 1] != symbol)
            antiDiagonal = false;
    }

    if (mainDiagonal || antiDiagonal)
        return true;

    return false;
}
