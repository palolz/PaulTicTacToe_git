#pragma once
#include <iostream>

/**********************************************************************************
*Class: the Board class contains the game grid and the methoids to 
edit/access/check for the game board
***********************************************************************************/
class Board
{
private:
    char m_matrix[9] = { '1','2', '3','4','5','6','7','8', '9' };

public:
    Board() {}
   
    char getPosition(int index)
    {
        return m_matrix[index];
    }
    bool drawBoard();
    bool insertMark(const char* mark, int index);
    bool checkRowWin(const char* mark);
    bool checkColumnWin(const char* mark);
    bool checkDiagonalWin(const char* mark);
    bool isBoardFull();
    
};

