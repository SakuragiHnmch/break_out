# library includes
include_directories(../3rd/glm)
include_directories(../3rd/glad/include)
include_directories(../3rd/glfw/include)
include_directories(../3rd/stb_image)

# create a library
add_library(resource STATIC src/resource_manager.cpp)
target_include_directories(resource PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ../utility/shader/include ../utility/texture/include)
target_link_libraries(resource glfw glad shader texture)