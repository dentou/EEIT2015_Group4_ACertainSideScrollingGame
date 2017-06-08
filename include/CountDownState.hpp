#ifndef COUNTDOWNSTATE_HPP_INCLUDED
#define COUNTDOWNSTATE_HPP_INCLUDED

#include "include/State.hpp"
#include <SFML/Graphics/Text.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class CountDownState : public State
{
public:
    CountDownState(StateStack& stateStack, Context context);
    virtual bool    handleEvent(const sf::Event& event);
    virtual bool    update(sf::Time dt);
    virtual void    draw();
private:
    sf::RenderWindow&   mWindow;
    sf::Text            mText;
    sf::Time            mElapsedTime;
};

#endif // COUNTDOWNSTATE_HPP_INCLUDED
