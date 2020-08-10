#include "image.hpp"

Image::Image(const std::string&& path)
{
    load(path);
}

Image::Image(const std::string& path)
{
    load(path);
}

Image::~Image()
{

}

void Image::load(const std::string& path)
{
    _texture.loadFromFile(path);
    _sprite.setTexture(_texture);
}

void Image::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    window.draw(_sprite);
}

const sf::Texture& Image::getTexture() const
{
    return _texture;
}