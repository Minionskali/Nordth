#include "enginebase.hpp"

EngineBase::EngineBase()
{
}//Constructor EngineBase
EngineBase::~EngineBase()
{
}//Destruktor EngineBase
void EngineBase::AddBoard(std::shared_ptr<Board>& board_Exist) {
	board = board_Exist;
}

void EngineBase::PLACEHOLDER()
{
	
}