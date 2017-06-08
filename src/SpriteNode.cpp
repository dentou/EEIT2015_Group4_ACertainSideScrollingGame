#include "include/SpriteNode.hpp"
SpriteNode::SpriteNode()
{

}


SpriteNode::SpriteNode(const sf::Texture& texture)
    : mSprite(texture)
{

}

SpriteNode::SpriteNode(const sf::Texture& texture, const sf::IntRect& textureRect)
    : mSprite(texture, textureRect)
{

}

void SpriteNode::initialize(const sf::Texture& texture, const sf::IntRect& textureRect)
{
    mSprite.setTexture(texture);
    mSprite.setTextureRect(textureRect);
}

void SpriteNode::drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(mSprite, states);
}




