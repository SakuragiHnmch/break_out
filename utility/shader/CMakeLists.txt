#library include
include_directories(../../3rd/glm)
include_directories(../../3rd/glad/include)
include_directories(../../3rd/glfw/include)

# executable
add_library(shader STATIC src/shader.cpp)
target_include_directories(shader PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)