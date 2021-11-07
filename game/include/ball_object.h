#ifndef BALL_OBJECT_H
#define BALL_OBJECT_H

#include<glad/glad.h>
#include<glm/glm.hpp>

#include "game_obj.h"
#include "texture.h"

class BallObject : public GameObject {
public:
    // ball state
    float Radius;
    bool Stuck;

    BallObject();
    BallObject(glm::vec2 pos, float radius, glm::vec2 velocity, MTexture2D sprite);
    // Move the ball, keeping it constrained within the window bounds (except bottom edge), and return the new position
    glm::vec2 Move(float dt, unsigned int window_width);
    // Resets the ball to original state with the given position and velocity
    void Reset(glm::vec2 position, glm::vec2 velocity);
};

#endif