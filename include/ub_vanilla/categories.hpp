#pragma once
#include "config.h"

#include <espresso/mod/category.hpp>

#define CATEGORY_WINDOW "vanilla_window"

namespace ub_vanilla::category
{
class window : public esp::mod::category
{
public:
	window(const std::string& mod_unlocalized_name, const std::string& mod_display_name)
		: esp::mod::category(mod_unlocalized_name, mod_display_name)
	{}

	[[nodiscard]] espresso::color get_color() const override;
	[[nodiscard]] std::string get_unlocalized_name() const override;
	[[nodiscard]] std::string get_display_name() const override;
};
} // namespace ub_vanilla::category
