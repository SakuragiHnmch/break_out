#version 330 core
out vec4 color;

in vec2 TexCoords;

uniform sampler2D image;
uniform vec3 spriteColor;

void main() {
    color = vec4(TexCoords, 0.0, 1.0);
}