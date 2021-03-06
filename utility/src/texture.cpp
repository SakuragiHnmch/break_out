#include "texture.h"

MTexture2D::MTexture2D()
    :Width(0), Height(0), Internal_Format(GL_RGB), Image_Format(GL_RGB), Wrap_T(GL_REPEAT), Wrap_S(GL_REPEAT), Filter_Min(GL_LINEAR), Filter_Max(GL_LINEAR)
{
//    glGenTextures(1, &this->ID);
}

void MTexture2D::Generate(unsigned int width, unsigned int height, unsigned char *data) {
    this->Width = width;
    this->Height = height;

    glGenTextures(1, &this->ID);
    glBindTexture(GL_TEXTURE_2D, this->ID);
    glTexImage2D(GL_TEXTURE_2D, 0, this->Internal_Format, width, height, 0, this->Image_Format, GL_UNSIGNED_BYTE, data);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, this->Wrap_S);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, this->Wrap_T);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, this->Filter_Min);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, this->Filter_Max);

    // unbind texture
    glBindTexture(GL_TEXTURE_2D, 0);
}

void MTexture2D::Bind() const {
    glBindTexture(GL_TEXTURE_2D, this->ID);
}