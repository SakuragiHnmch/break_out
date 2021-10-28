#ifndef BREAK_OUT_RENDERER_H
#define BREAK_OUT_RENDERER_H

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "texture.h"
#include "shader.h"

class SpriteRenderer {
public:
    SpriteRenderer(const Shader &shader);
    ~SpriteRenderer();

    // Renders a defined quad texture with given sprite
    void DrawSprite(const Texture2D &texture, glm::vec2 position, glm::vec2 size = glm::vec2(10.0f, 10.0f), float rotate = 0.0f, glm::vec3 color = glm::vec3(1.0f));

private:
    // render state
    Shader shader;
    unsigned int quadVAO;
    // initializes and configures the quad`s buffer and attributes
    void initRenderData();

};

#endif //BREAK_OUT_RENDERER_H
