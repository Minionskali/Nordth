
#ifndef ENGINEBASE_HPP
#define ENGINEBASE_HPP
#include "../Board/board.hpp"
#include <memory>
class EngineBase
{
protected:
	std::shared_ptr<Board> board;
public:
	EngineBase();
	void AddBoard(std::shared_ptr<Board>&& board_Exist);
	virtual void PLACEHOLDER();
	virtual ~EngineBase();
}; //End class EngineBase
#endif //!ENGINEBASE_HPP
