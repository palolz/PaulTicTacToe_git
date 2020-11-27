
#include <iostream>
#include "Board.h"
#include "Game.h"



int main()
{
    int a;
    Game g;
    while (!(g.isGameOver()))
    {
        g.PlayGame();
        g.SwapPlayer();
    }
    std::cout << "close the window to exit" << std::endl; 
    std::cin >> a;
}

