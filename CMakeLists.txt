cmake_minimum_required(VERSION 3.15)
project(UB_MOD_VANILLA)

set(MOD_UNLOCALIZED_NAME, "ub_vanilla")
file(GLOB_RECURSE UB_MOD_VANILLA_SRC "include/*/*.cpp" "include/*.cpp")

add_library(UB_MOD_VANILLA MODULE ${UB_MOD_VANILLA_SRC})

if(MSVC)
	source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}/include/${MOD_UNLOCALIZED_NAME}
				 FILES ${UB_MOD_VANILLA_SRC})
	target_compile_options(UB_MOD_VANILLA PRIVATE "/MP")
endif()

set_target_properties(UB_MOD_VANILLA PROPERTIES OUTPUT_NAME "${MOD_UNLOCALIZED_NAME}")

add_dependencies(
	UB_MOD_VANILLA ${UB_DEPENDENCIES} UB_CAPPUCCINO UB_ESPRESSO UB_RHR)

target_link_libraries(
	UB_MOD_VANILLA
	PUBLIC UB_CAPPUCCINO UB_ESPRESSO UB_RHR)

target_include_directories(
	UB_MOD_VANILLA
	PUBLIC SYSTEM "${CMAKE_SOURCE_DIR}/ub_cappuccino/include"
		   "${CMAKE_SOURCE_DIR}/ub_espresso/include" "${CMAKE_SOURCE_DIR}/ub_rhr/include")

target_link_libraries(
	UB_MOD_VANILLA
	PUBLIC ${UB_DEPENDENCIES_LINK}
	# imm32.lib
)

target_include_directories(
	UB_MOD_VANILLA
	PUBLIC SYSTEM ${PROJECT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/include
		   ${UB_DEPENDENCIES_INCLUDE} ${CMAKE_INCLUDES})

add_custom_command(
	TARGET UB_MOD_VANILLA
	POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:UB_MOD_VANILLA>
			$<TARGET_FILE_DIR:UB_CLIENT>/mods/)
