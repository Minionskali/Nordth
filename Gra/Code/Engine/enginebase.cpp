#include "enginebase.hpp"

EngineBase::EngineBase()
{
}//Constructor EngineBase
EngineBase::~EngineBase()
{
}//Destruktor EngineBase
void EngineBase::AddBoard(Board* board_Exist) {
	board = board_Exist;
}