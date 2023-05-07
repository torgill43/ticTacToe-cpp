/*
Program: TicTacToe
Author: Tim Orgill
*/
#include <iostream>
#include <fstream>
#include "Board.h"
#include "Player.h"
#include "Gameplay.h"
using namespace std;

int main()
{
    
    // Create instances of Board, Gameplay, and Player class
    Board board;
    Gameplay game;
    Player player;
    cout << "Welcome to my TicTacToe program in C++\n\n";

    //// Create a game board
    //char gameBoard[9];

    //// Open and read from file
    //ifstream boardFile("boardFile.txt");
    //if (boardFile.is_open())
    //{
    //    for (int i = 0; i < 9; i++)
    //    {
    //        boardFile >> gameBoard[i];
    //    }
    //}

    //// Close file
    //boardFile.close();

    // Create a board for global use.
    char * gameBoard = board._board;

    // Initial display of gameboard
    board.displayBoard(gameBoard);

    // Loop to continue until game end condition satisfied.
    bool gameOver = game.getGameOver();
    while (!gameOver)
    {
        // Play round
        char playerTurn = board.getTurn(gameBoard);
        player.displayTurn(playerTurn);
        game.doTurn(gameBoard, playerTurn);
        board.displayBoard(gameBoard);
        gameOver = board.checkWin(gameBoard, playerTurn);
        if (!gameOver)
        {
            gameOver = board.checkTie(gameBoard);
        }
    }


    return 0;
}