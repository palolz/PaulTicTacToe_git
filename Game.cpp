#include "Game.h"

/**********************************************************************************
*Function: the PlayGame() function does the following,
* -prints instructions.
* -takes input from user.
* -calls m_board.insertMark(mark, index) to implement choice.
* -checks for wins.
* -calls m_board.drawBoard() to draw the borad.
* Example:
 X   X   X
___|___|___
   |   |
 4   5   6
___|___|___
   |   |
 7   8   9
* Input: none
* Output: none
***********************************************************************************/
void Game::PlayGame()
{
	char mark;//local copy mark....
	
	if (m_currentPlayer == 1)
		mark = m_p1.GetPlayerMark();
	else 
		mark = m_p2.GetPlayerMark();

	std::cout << "Ready Player " << m_currentPlayer << "!!" << std::endl;
	std::cout << "Player " << m_currentPlayer <<" is (" << mark <<")"<< std::endl;
	
	std::cout << "Based on the TictacToe Board Above," << std::endl;
	std::cout<<"Please enter the available index, where you" << std::endl;
	std::cout << "would like to place your marker!" << std::endl;
	std::cin >> index;//waits indexinput from user
	
	while (!(index < 10 && index>0))//Loops if the index number is not correct
	{
		std::cout << "Enter the proper Index Number here: " << std::endl;
		std::cin >> index;
	}
	m_board.insertMark(mark, index);
	{
		if (m_board.checkColumnWin(mark) || m_board.checkRowWin(mark) || m_board.checkDiagonalWin(mark))//checks for winning contions
		{
			std::cout << "*********************************" << std::endl;
			std::cout << "Player " << m_currentPlayer << "(" << mark << ") " << "wins the game" << std::endl;
			std::cout << "*********************************" << std::endl;
			gameOver = true;
		}
		else if (m_board.isBoardFull())//checks if borad is full
		{
			std::cout << "*********************************" << std::endl;
			std::cout << "This game is a draw" << std::endl;
			std::cout << "*********************************" << std::endl;
			gameOver = true;
		}
		
	}
	m_board.drawBoard();//the current board is being drawn
	

}

/**********************************************************************************
*Function: the SwapPlayer() function alternates the players


* Input: none
* Output: none
***********************************************************************************/
void Game::SwapPlayer()
{
	if (m_currentPlayer == 1)
		m_currentPlayer = 2;
	else if (m_currentPlayer == 2)
		m_currentPlayer = 1;
}


/**********************************************************************************
*Function: the isGameOver() function return ture if gameover==1 or 0 if untrue


* Input: none
* Output: bool
***********************************************************************************/
bool Game::isGameOver()
{
	if (gameOver)
		return true;
	else
		return false;
}
