#ifndef PLAYERSSTATE_HPP_INCLUDED
#define PLAYERSSTATE_HPP_INCLUDED

#include <string>
#include <vector>

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>

#include "include/State.hpp"

class PlayersState : public State
{
public:
                        PlayersState(StateStack& stateStack, Context context);

    virtual bool        handleEvent(const sf::Event& event);
    virtual bool        update(sf::Time dt);
    virtual void        draw();



private:
    void                loadPlayers(std::string filename);
    void                updateOptionText();
    void                moveOptionText(float dx, float dy);

    sf::Sprite                  mBackgroundSprite;

    sf::Text                    mTitleText;

    std::vector<std::string>    mPlayerNames;
    std::vector<sf::Text>       mOptions;

    int                         mPlayerCount;

    int                         mOptionIndex;
    int                         mLowerIndex;
    int                         mUpperIndex;


};
#endif // PLAYERSSTATE_HPP_INCLUDED
