#ifndef BREAK_OUT_SHADER_H
#define BREAK_OUT_SHADER_H

#include <string>

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

// General purpose shader object. Compiles from file, generates compile/link-time error messages and hosts several utility function for easy management
class Shader
{
public:
    // state
    unsigned int ID;
    //constructor
    Shader() { };
    // set the current shader as active
    Shader &Use();
    // compile the shader from given source code
    void Compile(const char *vertexSource, const char *fragmentSource, const char *geometrySource = nullptr); //note: geometry source code is optional


    // utility functions
    // utility functions
    void    SetFloat    (const char *name, float value, bool useShader = false);
    void    SetInteger  (const char *name, int value, bool useShader = false);
    void    SetVector2f (const char *name, float x, float y, bool useShader = false);
    void    SetVector2f (const char *name, const glm::vec2 &value, bool useShader = false);
    void    SetVector3f (const char *name, float x, float y, float z, bool useShader = false);
    void    SetVector3f (const char *name, const glm::vec3 &value, bool useShader = false);
    void    SetVector4f (const char *name, float x, float y, float z, float w, bool useShader = false);
    void    SetVector4f (const char *name, const glm::vec4 &value, bool useShader = false);
    void    SetMatrix4  (const char *name, const glm::mat4 &matrix, bool useShader = false);

private:
    //check if compilation or linking failed and if so, print the error logs
    void checkCompileErrors(unsigned int object, std::string type);
};

#endif //BREAK_OUT_SHADER_H
