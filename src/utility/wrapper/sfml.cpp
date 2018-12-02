#include <SFML/System/Vector2.hpp>

#include "utility/wrapper/sfml.hpp"
#include "utility/type/XYValue.hpp"

namespace sb
{
	sf::Vector2f sfVector2(const XValue x, const YValue y)
	{
		return { float(x), float(y) };
	}

	sf::Vector2f sfVector2(const XYValue xy)
	{
		return sfVector2(xy.x_, xy.y_ );
	}
}