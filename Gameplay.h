#pragma once
#include <iostream>

#include "Board.h"
#include "Player.h"

using namespace std;

/*******************************************
* Gampeplay Class
* 
* Control the gameplay and flow of the game
********************************************/

class Gameplay
{
public:
	Board board;
	Player turn;
		
public:
	bool _gameOver = false;
	Gameplay();

	//char * playGame(char board[9]); // Stretch - use this to house other methods for practice using pointers
	int getInput();
	
	void doTurn(char * gameBoard, char playerTurn);
	bool getGameOver();
};