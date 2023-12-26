#include "Player.h"
using namespace std;

// :: scope resulution operator

// this is a short form of the
/**
 * Player constructor, here : is the initialization list after that we delace all attributes to initialize them, and then simply
 */
Player::Player(const string &playerName, char playerSymbol) : name(playerName), symbol(playerSymbol) {}

string Player ::getName()
{
    return name;
}

char Player ::getSymbol()
{
    return symbol;
}
