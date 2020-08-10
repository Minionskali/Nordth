#pragma once
#ifndef ENGINEBASE_HPP
#define ENGINEBASE_HPP
#include "..\Board\board.hpp"
class EngineBase
{
protected:
	Board* board;
public:
	EngineBase();
	void AddBoard(Board* board_Exist);
	~EngineBase();
}; //End class EngineBase
#endif //!ENGINEBASE_HPP
