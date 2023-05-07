#pragma once
#include <iostream>
#include <fstream>
using namespace std;

/********************
* 
* Board Class
* 
*********************/
class Board
{
		
public:
	char _board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	
	Board();

	//void loadBoard(); // stretch challenge 1 << load from a file

	void displayBoard(char * board);

	char getTurn(char * board);

	bool isValidMove(char choice);

	char * updateBoard(char playerTurn, char * board, char userChoice);

	//void saveBoard(char board[9]); // stretch challenge 2 - allow user to save and come back - need to be able to write to file

	bool checkWin(char * board, char turn);

	bool checkTie(char * board);
};

