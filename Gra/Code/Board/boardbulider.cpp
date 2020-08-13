#include "boardbulider.hpp"

BoardBulider::BoardBulider()
{
	board = std::make_shared<Board>();
}//Constructor BoardBulider
std::shared_ptr<Board> BoardBulider::build() {
	return board;
}
BoardBulider::~BoardBulider()
{
}//Destruktor BoardBulider
