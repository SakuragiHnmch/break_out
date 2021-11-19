#ifndef PARTICLE_H
#define PARTICLE_H

#include<vector>

#include<glad/glad.h>
#include<glm/glm.hpp>

#include "shader.h"
#include "texture.h"
#include "game_obj.h"

struct Particle {
    glm::vec2 Position, Velocity;
    glm::vec4 Color;
    float Life;

    Particle(): Position(0.0f), Velocity(0.0f), Color(1.0f), Life(0.0f) {}
};

// ParticleGenerator acts as a container for rendering a large number of particles 
// by repeatedly spawning and updating particles and killing them after a given amount of time
class ParticleGenerator {
public:
    // constructor
    ParticleGenerator(Shader shader, MTexture2D texture, unsigned int amount);

    void Update(float dt, GameObject &object, unsigned int newParticles, glm::vec2 offset = glm::vec2(0.0f, 0.0f));

    void Draw();

private:
    std::vector<Particle> particles;
    unsigned int amount;
    Shader shader;
    MTexture2D texture;
    unsigned int VAO;
    // initialize buffer and vertex attributes
    void init();
    // returns the first Particle index that`s currently unused
    unsigned int firstUnusedParticle();

    void respawnParticle(Particle &particle, GameObject &object, glm::vec2 offset = glm::vec2(0.0f, 0.0f));
};

#endif