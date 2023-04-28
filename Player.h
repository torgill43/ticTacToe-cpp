#pragma once
#include <iostream>
using namespace std;

class Player
{
private:
	char _turn = 'x';
	
public:
	Player();

	//Player(char turn);

	char checkTurn(int counter);
};