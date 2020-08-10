#pragma once
#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <SFML/Graphics.hpp>
#include <string>

class Image : public sf::Drawable
{

	public:
	Image() = default;
	Image(const std::string&& path);
	~Image();

	void load(const std::string& path);

	void draw(sf::RenderTarget& window, sf::RenderStates states) const;

	const sf::Texture& getTexture() const;


	private:
	sf::Texture _texture;
	sf::Sprite _sprite;

}; //End class Image

#endif //!IMAGE_HPP
