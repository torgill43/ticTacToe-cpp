#include "Board.h"

Board::Board()
{
	// Nothing
}

//char * Board::loadBoard()
//{
//    ifstream boardFile("boardFile.txt");
//    
//    if (boardFile.is_open())
//    char board[9];
//
//
//}

void Board::displayBoard(char * board)
{
   cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
   cout << " - + - + - " << endl;
   cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
   cout << " - + - + - " << endl;
   cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
}

char Board::getTurn(char * board)
{
    int countX = 0;
    int countO = 0;

    for (int i = 0; i < 9; i++)
    {
        if (board[i] == 'x')
        {
            countX++;
        }
        else if (board[i] == 'o')
        {
            countO++;
        }
    }

    if (countX == countO)
    {
        return 'x';
    }
    else
    {
        return 'o';
    }
}

bool Board::isValidMove(char choice)
{
	return true;
}

char * Board::updateBoard(char playerTurn, char * board, char userChoice)
{
	cout << board[userChoice] << endl;
	board[userChoice] = playerTurn;
	cout << board[userChoice] << endl;
	
	return board;
}

//void Board::saveBoard(char board[9])
//{
//
//}

bool Board::checkWin(char * board, char turn)
{
    if (board[0] == turn && board[1] == turn && board[2] == turn)
    {
        cout << turn << " is the winner!" << endl;
        return true;
    }
    else if (board[3] == turn && board[4] == turn && board[5] == turn)
    {
        cout << turn << " is the winner!" << endl;
        return true;
    }
    else if (board[6] == turn && board[7] == turn && board[8] == turn)
    {
        cout << turn << " is the winner!" << endl;
        return true;
    }
    else if (board[0] == turn && board[3] == turn && board[6] == turn)
    {
        cout << turn << " is the winner!" << endl;
        return true;
    }
    else if (board[1] == turn && board[4] == turn && board[7] == turn)
    {
        cout << turn << " is the winner!" << endl;
        return true;
    }
    else if (board[2] == turn && board[5] == turn && board[8] == turn)
    {
        cout << turn << " is the winner!" << endl;
        return true;
    }
    else if (board[0] == turn && board[4] == turn && board[8] == turn)
    {
        cout << turn << " is the winner!" << endl;
        return true;
    }
    else if (board[2] == turn && board[4] == turn && board[6] == turn)
    {
        cout << turn << " is the winner!" << endl;
        return true;
    }
        
    return false;
}

bool Board::checkTie(char* board)
{
    int countX = 0;
    int countO = 0;

    for (int i = 0; i < 9; i++)
    {
        if (board[i] == 'x')
        {
            countX++;
        }
        else if (board[i] == 'o')
        {
            countO++;
        }
    }

    if (countX == 5 && countO == 4)
    {
        cout << "It's a tie!" << endl;
        return true;
    }

    return false;
}