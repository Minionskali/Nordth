
#ifndef BOARDBULIDER_HPP
#define BOARDBULIDER_HPP
#include "board.hpp"
#include "fabricobstacle.hpp"
#include "fabriciteam.hpp"
#include "fabricactor.hpp"
class BoardBulider
{
	std::shared_ptr<Board> board;
public:
	BoardBulider();
	std::shared_ptr<Board> build();
	~BoardBulider();
}; //End class BoardBulider
#endif //!BOARDBULIDER_HPP
