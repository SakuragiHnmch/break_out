include_directories(../3rd/glm)
include_directories(../3rd/glad/include)
include_directories(../3rd/stb_image)
include_directories(../3rd/glfw/include)

set(
        SOURCES
        src/texture.cpp
        src/shader.cpp
        src/renderer.cpp
        src/resource_manager.cpp
)

add_library(utility STATIC ${SOURCES})
target_include_directories(utility PUBLIC include)
target_link_libraries(utility glfw glad)

