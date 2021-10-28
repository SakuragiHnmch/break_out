include_directories(../3rd/glm)
include_directories(../3rd/glad/include)
include_directories(../3rd/glfw/include)
include_directories(../3rd/stb_image)

add_library(renderer STATIC src/renderer.cpp)
target_include_directories(renderer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ../utility/shader/include ../utility/texture/include)
target_link_libraries(renderer glfw glad shader texture)