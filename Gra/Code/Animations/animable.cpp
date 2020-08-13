#include "animable.hpp"
#include <iostream>

//static fields/methods

const std::filesystem::path Animable::ANIMATIONS_PATH{"./resources/animations/"}; 

const float Animable::FRAMETIME{0.2f};

std::map<std::string, Animation> Animable::animationDataBase;

void Animable::loadAnimations()
{
    for(const std::filesystem::directory_entry& entry : std::filesystem::directory_iterator(ANIMATIONS_PATH))
    {
        animationDataBase.insert(std::pair<std::string, Animation>("test", Animation{entry.path().string()}));
    } 
}


//member fields/methods

Animable::Animable()
    : _currentAnimation{nullptr}
{
    selectAnimation();
}

void Animable::animate()
{
    if(timer.getElapsedTime().asSeconds() > FRAMETIME)
    {
        nextFrame();
        //adjustOrientation();
        timer.restart();
    }
}

void Animable::selectAnimation()
{
    Animation* previousAnimation = _currentAnimation;
    
    _currentAnimation = &animationDataBase["test"];
    
    if(_currentAnimation != previousAnimation)
    {
        reset();
    }
}

void Animable::reset()
{
    _currentFrame = std::begin(_currentAnimation->getImageVector());
}

void Animable::nextFrame()
{
    if(_currentFrame != getLastAnimationElement())
    {
        _currentFrame++;
    }
    else
    {
        reset();
    }
}

const std::vector<Image>::iterator Animable::getLastAnimationElement() const
{
    return std::end(_currentAnimation->getImageVector())-1;
}

void Animable::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    _currentFrame->getSprite().setTexture(_currentFrame->getTexture());
    window.draw((*_currentFrame));
}
