#ifndef Game_H
#define Game_H

#include "Board.h"
#include "Player.h"
class Game
{
private:
    Board board;
    Player player1;
    Player player2;
    Player *currPlayer;
    bool isGameOver;

public:
    Game(const string &plater1Name, const string &plater2Name, int boardSize);
    void start();
    void playTurn();
    bool isDraw();
};

#endif