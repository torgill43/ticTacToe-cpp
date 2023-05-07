#pragma once
#include <iostream>
#include "Board.h"
using namespace std;

/********************
*
* Player Class
*
*********************/

class Player
{
	
public:
	Player();
	Board board;

	//Player(char turn);

	void displayTurn(char playerTurn);
};