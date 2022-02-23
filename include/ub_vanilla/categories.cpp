#include "categories.hpp"

espresso::color ub_vanilla::category::window::get_color() const
{
	return espresso::color().from_u8({88, 95, 179, 255});
}

std::string ub_vanilla::category::window::get_unlocalized_name() const
{
	return CATEGORY_WINDOW;
}

std::string ub_vanilla::category::window::get_display_name() const
{
	return "window";
}