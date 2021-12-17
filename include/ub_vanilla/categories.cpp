#include "categories.hpp"

cap::color ub_vanilla::category::window::get_color() const
{
	return cap::color().from_u8({ 88, 95, 179, 255 });
}

std::string ub_vanilla::category::window::get_unlocalized_name() const
{
	return CATEGORY_WINDOW;
}

std::string ub_vanilla::category::window::get_display_name() const
{
	return "window";
}