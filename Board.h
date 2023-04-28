#pragma once
#include <iostream>
using namespace std;

class Board
{
private:
	char _board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
		
public:
	Board();

	//void loadBoard(); // stretch challenge << load from a file

	void displayBoard();

	void updateBoard(char board[9]);

	void saveBoard(char board[9]);

	bool checkWin(char board[9]);
};

