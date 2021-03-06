#ifndef BREAK_OUT_RESOURCE_MANAGER_H
#define BREAK_OUT_RESOURCE_MANAGER_H

#include <map>
#include <string>

#include <glad/glad.h>

#include "texture.h"
#include "shader.h"

// A static singleton ResourceManager class that hosts several functions
// to load Textures and Shaders. Each loaded texture and/or shader is also
// stored for future reference by string handles. All functions and resources
// are static and no public constructor is defined
class ResourceManager {
public:
    // resource storage
    static std::map<std::string, Shader> Shaders;
    static std::map<std::string, MTexture2D> Textures;
    // loads (and generates) a shader program from file loading vertex, fragment shader`s source code.
    static Shader LoadShader(const char *vShaderFile, const char *fShaderFile, const char *gShaderFile, std::string name);
    //retrieves a stored shader
    static Shader GetShader(std::string name);

    static MTexture2D LoadTexture(const char *file, std::string name);

    static MTexture2D GetTexture(std::string name);

    static void Clear();

private:
    // private constructor, that is we do not want any actual resource manager objects.Its members and functions should be publicly available(static)
    ResourceManager() {}

    static Shader loadShaderFromFile(const char *vShaderFile, const char *fShaderFile, const char *gShaderFile = nullptr);

    static MTexture2D loadTextureFromFile(const char *file);
    
};

#endif //BREAK_OUT_RESOURCE_MANAGER_H
