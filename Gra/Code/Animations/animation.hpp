#ifndef ANIMATION_HPP
#define ANIMATION_HPP

#include <vector>
#include <string>
#include <memory>
#include "Graphic/image.hpp"

class Animation
{
    public:
    Animation() = default;
    Animation(std::string&& path);

    void addFrame(std::string&& path);
    
    std::vector<Image>& getImageVector();

    private:
    std::vector<Image> _animation;
};

#endif