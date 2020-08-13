#include "animation.hpp"
#include <filesystem>
#include <iostream>
#include "GeneralFunctions/GeneralFunctions.hpp"

Animation::Animation(std::string&& path)
{    
    std::vector<std::string> sortingHelper;
    for(const std::filesystem::directory_entry& entry : std::filesystem::directory_iterator(path))
    {
        sortingHelper.push_back(entry.path().string());
        _animation.push_back(Image{});
    }

    for(const std::string& path : sortingHelper)
    {
        int index = getNumFromStr(path) - 1;
        _animation[index].load(path);
        std::cout << "index: " << index << " size: " << _animation.size() << " " << path << std::endl;
    }
}

void Animation::addFrame(std::string&& path)
{
    _animation.push_back(Image{path});
}

std::vector<Image>& Animation::getImageVector()
{
    return _animation;
}