#pragma once
#ifndef ENGINEGRAPHIC_HPP
#define ENGINEGRAPHIC_HPP
#include "enginebase.hpp"
#include "..\Graphic\frame.hpp"
#include <list>
class EngineGraphic: public EngineBase
{
	std::list<Frame>* Frames;
public:
	EngineGraphic();
	~EngineGraphic();
}; //End class EngineGraphic
#endif //!ENGINEGRAPHIC_HPP
