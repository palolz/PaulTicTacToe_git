#pragma once
#include <iostream>
#include "Board.h"
#include "Player.h"
#define p(n) std::cout<<n<<std::endl;//As i dont like using "using namspace std;"

/**********************************************************************************
*Class: the Game class contains the template for game instances, player obj and 
board obj. It also contains methods that contain the main game mechanics
***********************************************************************************/
class Game
{
private:
	Board m_board;
	Player m_p1;
	Player m_p2;
	int m_currentPlayer;
	int index = 0;
	bool gameOver = false;
public:
	Game()
	{
		m_currentPlayer = 1;
		m_p1.SetPlayerMark("X");
		p("Player 1 is (X)");
		m_p2.SetPlayerMark("O");
		p("Player 2 is (o)");
		m_board.drawBoard();
	}
	void PlayGame();
	void SwapPlayer();
	bool isGameOver();
	
};

