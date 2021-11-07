# library includes
include_directories(../3rd/glm)
include_directories(../3rd/glad/include)
include_directories(../3rd/stb_image)
include_directories(../3rd/glfw/include)

# create a library
set (SOURCES
        src/game.cpp
        src/game_obj.cpp
        src/game_level.cpp
        src/ball_object.cpp
)

add_library(game STATIC ${SOURCES})
target_include_directories(game PUBLIC include ../utility/include)
target_link_libraries(game utility)

# resource copy
add_custom_command(
        TARGET game PRE_BUILD
        COMMAND ${CMAKE_COMMAND} -E
        copy_directory ${PROJECT_SOURCE_DIR}/resources ${CMAKE_BINARY_DIR}
)