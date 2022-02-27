#include "mod.hpp"

// window

#include "blocks/window/create.hpp"

UB_EXPORT void Initialization(esp::mod::data* data)
{
	latte::logger::initialize();
	latte::logger::set_stream_system(data->get_stream_system());
	latte::logger::set_stream_editor(data->get_stream_editor());
	latte::logger::set_stream_runtime(data->get_stream_runtime());

	/////////////////////////////////////////////////////////////////
	// mod information
	/////////////////////////////////////////////////////////////////

	data->set_mod_display_name("vanilla");
	data->set_mod_unlocalized_name("vanilla");
	data->set_version("NULL"); // TODO: version

	/////////////////////////////////////////////////////////////////
	// categories
	/////////////////////////////////////////////////////////////////

	data->register_category(
		new ub_vanilla::category::window(data->get_mod_unlocalized_name(), data->get_mod_display_name()));

	/////////////////////////////////////////////////////////////////
	// Blocks
	/////////////////////////////////////////////////////////////////

	// window

	data->register_block(new ub_vanilla::block::window::create());
}
