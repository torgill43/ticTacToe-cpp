/*
Program: TicTacToe
Author: Tim Orgill
*/
#include <iostream>
#include "Board.h"
#include "Player.h"
#include "Gameplay.h"
using namespace std;

int main()
{
    Board board;
    cout << "Welcome to my TicTacToe program in C++\n\n";

    board.displayBoard();

    return 0;
}