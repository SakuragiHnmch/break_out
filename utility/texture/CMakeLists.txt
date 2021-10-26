include_directories(../../3rd/glm)
include_directories(../../3rd/glad/include)
include_directories(../../3rd/glfw/include)

# executable
add_library(texture STATIC src/texture.cpp)
target_include_directories(texture PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)