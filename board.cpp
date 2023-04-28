#include "Board.h"

Board::Board()
{
	// Nothing
}

void Board::displayBoard()
{
   cout << " " << _board[0] << " | " << _board[1] << " | " << _board[2] << endl;
   cout << " - + - + - " << endl;
   cout << " " << _board[3] << " | " << _board[4] << " | " << _board[5] << endl;
   cout << " - + - + - " << endl;
   cout << " " << _board[6] << " | " << _board[7] << " | " << _board[8] << endl;
}

void Board::updateBoard(char board[9])
{

}

void Board::saveBoard(char board[9])
{

}

//bool Board::checkWin(char board[9])
//{
//
//}