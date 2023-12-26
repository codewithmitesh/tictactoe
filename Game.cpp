#include "Game.h"

using namespace std;

Game::Game(const string &player1Name, const string &player2Name, int boardSize) : player1(player1Name, 'X'), player2(player2Name, 'O'), board(boardSize), currPlayer(&player1), isGameOver(false) {}

void Game::start()
{
    cout << "WELCOM TO THE TIC TAC TOE GAME \n";

    board.display();
    while (!isGameOver)
    {
        playTurn();      // player will play the turn
        board.display(); // after play display the board
        // check if the player wins
        if (board.checkWin(currPlayer->getSymbol()))
        {
            cout << currPlayer->getName() << " Wins!!! \n";
            isGameOver = true;
        }
        else if (board.isFull())
        {
            cout << "Its a draw game";
            isGameOver = true;
        }
        else
        {
            currPlayer = (currPlayer == &player1) ? &player2 : &player1;
        }
    }
}

void Game::playTurn()
{
    int row, col;
    cout << currPlayer->getName() << "'s Turn. Enter row and cols (0-based indexing): ";
    cin >> row >> col;
    while (board.placeMove(row, col, currPlayer->getSymbol()) == false)
    {
        cout << "Invalid Move, Try again please: ";
        cin >> row >> col;
    }
}

/// when board is full and none of player won then only match is draw
bool Game ::isDraw()
{
    return board.isFull() && !board.checkWin(player1.getSymbol()) && !board.checkWin(player2.getSymbol());
}