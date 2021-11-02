#ifndef GAME_LEVEL_H
#define GAME_LEVEL_H

#include <vector>

#include <glad/glad.h>
#include <glm/glm.hpp>

#include "game_obj.h"
#include "renderer.h"
#include "resource_manager.h"

// GameLevel holds all Tiles as part of a Breakout level and host functionality to Load/render levels from the harddisk
class GameLevel {
public: 
    // level state
    std::vector<GameObject> Bricks;

    GameLevel() {}
    // load level from file
    void Load(const char *file, unsigned int levelWidth, unsigned int levelHeight);
    // render level
    void Draw(SpriteRenderer &renderer);
    // check if the level is completed(all non-solid tiles are destroyed)
    bool IsCompleted();

private:
    // initialize level from tile data
    void init(std::vector<std::vector<unsigned int>> tileData, unsigned int levelWidth, unsigned int levelHeight);
};

#endif