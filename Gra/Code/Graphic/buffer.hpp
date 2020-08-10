#ifndef BUFFER_HPP
#define BUFFER_HPP
#include "frame.hpp"
#include <list>
class Buffer
{
	std::list<Frame> Frames;
public:
	Buffer();
	~Buffer();
}; //End class Buffer
#endif //!BUFFER_HPP
