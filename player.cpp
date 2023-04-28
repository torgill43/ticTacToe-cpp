#include "Player.h"

Player::Player()
{
	// Nothing
}

//Player::Player(char turn)
//{
//	//_turn = turn;
//}

char Player::checkTurn(int counter)
{
	if (counter % 2 == 0)
	{
		_turn = 'o';
	}
	else
	{
		_turn = 'x';
	}
	return _turn;
}