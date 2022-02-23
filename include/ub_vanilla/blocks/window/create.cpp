#include "create.hpp"

static void execute_release(espresso::mod::block::pass* pass)
{}

static void execute_debug(espresso::mod::block::pass* pass)
{
	execute_release(pass);
}

const char* ub_vanilla::block::window::create::get_unlocalized_name() const
{
	return "vanilla_window_create";
}

const char* ub_vanilla::block::window::create::get_category() const
{
	return CATEGORY_WINDOW;
}

espresso::mod::block::block::execution ub_vanilla::block::window::create::pull_execute_release() const
{
	return execute_release;
}

espresso::mod::block::block::execution ub_vanilla::block::window::create::pull_execute_debug() const
{
	return execute_debug;
}

std::vector<espresso::mod::block::block::argument::initializer> ub_vanilla::block::window::create::get_arguments() const
{
	return {
		{espresso::mod::block::block::argument::type::TEXT,
		 espresso::mod::block::block::argument::variable_mode_restriction::NONE,
		 espresso::mod::block::block::argument::variable_mode::RAW,
		 "create window"}
	 };
}
