#ifndef ANIMABLE_HPP
#define ANIMABLE_HPP
#include <vector>
#include "Graphic/image.hpp"
#include "animation.hpp"
#include <map>
#include <filesystem>
#include <memory>
#include <SFML/Graphics.hpp>

class Animable : public sf::Drawable
{
    public:
    static const std::filesystem::path ANIMATIONS_PATH;
    static const float FRAMETIME;  

    static std::map<std::string, Animation> animationDataBase;
    static void loadAnimations();

    Animable();
    void animate();

    void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    private:
    void reset();
    void nextFrame();
    //virtual void adjustOrientation();
    const std::vector<Image>::iterator getLastAnimationElement() const;
    virtual void selectAnimation();
    sf::Clock timer;

    Animation* _currentAnimation;
    std::vector<Image>::iterator _currentFrame;
};

#endif