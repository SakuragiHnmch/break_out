#ifndef BREAK_OUT_TEXTURE_H
#define BREAK_OUT_TEXTURE_H

#include <glad/glad.h>

class MTexture2D {
public:
    unsigned int ID;
    unsigned int Width, Height;
    // texture format
    unsigned int Internal_Format;
    unsigned int Image_Format;
    //texture configuration
    unsigned int Wrap_S;
    unsigned int Wrap_T;
    unsigned int Filter_Min; // filtering mode if texture pixels < screen pixels
    unsigned int Filter_Max; // filtering mode if texture pixels > screen pixels

    MTexture2D();
    void Generate(unsigned int width, unsigned int height, unsigned char* data);
    //bind the texture as the current active GL_TEXTURE_2D texture object
    void Bind() const;
};

#endif //BREAK_OUT_TEXTURE_H
