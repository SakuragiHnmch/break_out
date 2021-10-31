include_directories(../3rd/glm)
include_directories(../3rd/glad/include)
include_directories(../3rd/stb_image)
include_directories(../3rd/glfw/include)

add_executable(program program.cpp)
target_include_directories(program PUBLIC ../game/include ../resource_manager/include)
target_link_libraries(program glfw glad game utility)