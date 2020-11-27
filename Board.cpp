#include "Board.h"
#include <iostream>
#define p(n) std::cout<<n<<std::endl;


/**********************************************************************************
*Function: the drawBoard() function draws the current state of game board. 
* Example:
 1   2   3
___|___|___
   |   |
 4   5   6
___|___|___
   |   |
 7   8   9
* Input: none
* Output: bool- 1:sucess 
***********************************************************************************/
bool Board::drawBoard()
{
    p("___________________");
    p(" ");
    p("***Current Board***");
    p("___________________");
    std::cout << " " << m_matrix[0] << "   " << m_matrix[1] << "   " << m_matrix[2] << std::endl;
    p("___|___|___");
    p("   |   |   ");
    std::cout << " " << m_matrix[3] << "   " << m_matrix[4] << "   " << m_matrix[5] << std::endl;
    p("___|___|___");
    p("   |   |   ");
    std::cout << " " << m_matrix[6] << "   " << m_matrix[7] << "   " << m_matrix[8] << std::endl;
    std::cout << " \n\n" << std::endl;
    return 1;
}
    
/**********************************************************************************
*Function: the insertMark() function places X or O at the specified index of game board
* input: X or O and index of board matrix
* Output: bool- 1:sucess 2:faliur
***********************************************************************************/
bool Board::insertMark(char mark, int index)
{   
    if ((m_matrix[(index - 1)] != 'X') && (m_matrix[(index - 1)] != 'O'))
    {
        m_matrix[index - 1] = mark;
        return 1;
    }
    else { return 0; }
    
}


/**********************************************************************************
*Function: the checkRowWin() function checks if any of the rows contain same marks .
* Example:
 X   X   X
___|___|___
   |   |
 4   5   6
___|___|___
   |   |
 7   8   9
* Input: mark X or O
* Output: bool- 1:sucess 0:fail
***********************************************************************************/
bool Board::checkRowWin(char mark)
{
    if ((m_matrix[0] == mark) && (m_matrix[1] == mark) && (m_matrix[2] == mark))
        return 1;
    else if ((m_matrix[3] == mark) && (m_matrix[4] == mark) && (m_matrix[5] == mark))
        return 1;
    else if ((m_matrix[6] == mark) && (m_matrix[7] == mark) && (m_matrix[8] == mark))
        return 1;
    else
        return 0;
}


/**********************************************************************************
*Function: the checkColumnWin() function checks if any of the Columns contain same marks .
* Example:
 1   2   O
___|___|___
   |   |
 4   5   O
___|___|___
   |   |
 7   8   O
* Input: mark X or O
* Output: bool- 1:sucess 0:fail
***********************************************************************************/
bool Board::checkColumnWin(char mark)
{
    if ((m_matrix[0] == mark) && (m_matrix[3] == mark) && (m_matrix[6] == mark))
        return 1;
    else if ((m_matrix[1] == mark) && (m_matrix[4] == mark) && (m_matrix[7] == mark))
        return 1;
    else if ((m_matrix[2] == mark) && (m_matrix[5] == mark) && (m_matrix[8] == mark))
        return 1;
    else
        return 0;
}

/**********************************************************************************
*Function: the checkDiagonalWin() function checks if any of the Diagonal lines 
contain same marks.
*Example:
 1   2   O
___|___|___
   |   |
 4   O   6
___|___|___
   |   |
 O   8   9
* Input: mark X or O
* Output: bool- 1:sucess 0:fail
***********************************************************************************/
bool Board::checkDiagonalWin( char mark)
{
    if ((m_matrix[0] == mark) && (m_matrix[4] == mark) && (m_matrix[8] == mark))
        return 1;
    else if ((m_matrix[6] == mark) && (m_matrix[4] == mark) && (m_matrix[2] == mark))
        return 1;
    else
        return 0;
}


/**********************************************************************************
*Function: the isBoardFull() function checks if the board is full already
contain same marks.
*Example:
 x   O   O
___|___|___
   |   |
 X   X   O
___|___|___
   |   |
 O   X   O
* Input: none
* Output: bool- 1:full 0:not_full
***********************************************************************************/
bool Board::isBoardFull()
{
    if (((m_matrix[0] == 'X') || (m_matrix[0] == 'O')) &&
        ((m_matrix[1] == 'X') || (m_matrix[1] == 'O')) &&
        ((m_matrix[2] == 'X') || (m_matrix[2] == 'O')) &&
        ((m_matrix[3] == 'X') || (m_matrix[3] == 'O')) &&
        ((m_matrix[4] == 'X') || (m_matrix[4] == 'O')) &&
        ((m_matrix[5] == 'X') || (m_matrix[5] == 'O')) &&
        ((m_matrix[6] == 'X') || (m_matrix[6] == 'O')) &&
        ((m_matrix[7] == 'X') || (m_matrix[7] == 'O')) &&
        ((m_matrix[8] == 'X') || (m_matrix[8] == 'O')))
    {
        return true;
    }
    else { return false; }
}