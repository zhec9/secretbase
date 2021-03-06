#include "MenuPlayer.hpp"
#include "menu/application/titleMenu.hpp"

namespace nemo
{

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

MenuPlayer::MenuPlayer()
{
	active_ = true;
	current_entry_ = createTitleMenu();
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

bool
MenuPlayer::menuIsOpened()
const noexcept
{
	return active_;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void
MenuPlayer::update(
	const std::optional<KeyAction> key, 
	sf::RenderWindow& window)
{
	if (menuIsOpened()) {
		current_entry_->drawIt(window);
	}

}

}