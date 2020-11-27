#pragma once
#include <iostream>


/**********************************************************************************
*Class: the Player class contains the templets for player objs. it also contains 
* methods to set and get the mark (X or O)
***********************************************************************************/
class Player
{
private:
	char m_mark;
public:
	void SetPlayerMark(char mark)
	{
		m_mark = mark;
	}
	char GetPlayerMark()
	{
		return m_mark;
	}
};

