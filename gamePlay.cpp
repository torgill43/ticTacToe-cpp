#include "Gameplay.h"

Gameplay::Gameplay()
{
	// Nothing
}

int Gameplay::getInput() 
{
	int choice;
	cout << "Make selection: ";
	cin >> choice;

	int location = choice - 1;
	return location;
};

void Gameplay::doTurn(char * gameBoard, char playerTurn)
{
	int userChoice = getInput();
	bool isValid = false;
	while (!isValid)
	{
		isValid = board.isValidMove(userChoice);
		if (isValid)
		{
			board.updateBoard(playerTurn, gameBoard, userChoice);
		}
	}
}

bool Gameplay::getGameOver()
{
	return _gameOver;
}