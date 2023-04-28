#pragma once
#include <iostream>
using namespace std;

class Gameplay
{
public:
	bool gameOver = false;
	int turnCounter = 1;
		
public:
	Gameplay();

	char getInput();
	bool isValidMove();
	void doTurn();
};