#pragma once
#include "ub_vanilla/categories.hpp"
#include <espresso/mod/data.hpp>

namespace ub_vanilla::block::window
{
class create : public espresso::mod::block::block
{
public:
	[[nodiscard]] const char* get_unlocalized_name() const override;
	[[nodiscard]] const char* get_category() const override;

	[[nodiscard]] espresso::mod::block::block::execution pull_execute_release() const override;
	[[nodiscard]] espresso::mod::block::block::execution pull_execute_debug() const override;

	[[nodiscard]] std::vector<espresso::mod::block::block::argument::initializer> get_arguments() const override;
};
} // namespace ub_vanilla::block::window