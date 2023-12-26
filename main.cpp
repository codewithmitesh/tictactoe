#include <bits/stdc++.h>
#include "Game.h"
using namespace std;

int main()
{
    // declaring variables

    int boardSize;
    string player1Name, player2Name;
    cout << "Enter the size of the board: ";
    cin >> boardSize;

    cout << "Enter the Name of the Player 1: ";
    cin >> player1Name;

    cout << "Enter the Name of the Player 2: ";
    cin >> player2Name;

    Game ticTacToe(player1Name, player2Name, boardSize);
    ticTacToe.start();

    return 0;
}
/** run command :-
 *
 * to compile all files :-
 *  g++ -c main.cpp Player.cpp Game.cpp Board.cpp
 * To generate the .exe file ( give the .o files in same order)
 * g++ main.o Player.o Game.o Board.o -o ticTacToe
 * TO run the exe
 * ./ticTacToe
 *
 *
 */