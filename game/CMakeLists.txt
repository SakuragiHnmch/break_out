# library includes
include_directories(../3rd/glm)
include_directories(../3rd/glad/include)
include_directories(../3rd/stb_image)
include_directories(../3rd/glfw/include)

# create a library
add_library(game STATIC src/game.cpp)
target_include_directories(game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)