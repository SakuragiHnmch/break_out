#include "game.h"
#include <resource_manager.h>
#include <renderer.h>


//game-related state data
SpriteRenderer *Renderer;

Game::Game(unsigned int width, unsigned int height)
        : State(GAME_ACTIVE), Keys(), Width(width), Height(height)
{

}


Game::~Game() {
    delete Renderer;
}


void Game::Init()
{
    // load shaders
    ResourceManager::LoadShader("../shaders/face.vs", "../shaders/face.fs", nullptr, "sprite");
    glm::mat4 projection = glm::ortho(0.0f, static_cast<float>(this->Width), static_cast<float>(this->Height), 0.0f, -1.0f, 1.0f);


    ResourceManager::GetShader("sprite").Use().SetInteger("image", 0);
    ResourceManager::GetShader("sprite").Use().SetMatrix4("projection", projection);
    //set render-specific controls
    //这里和第46行为什么不能直接使用GetShader函数的返回值作为函数参数，有待研究---- (引用形参需要加上const)
//    Shader temShader = ResourceManager::GetShader("sprite");
    Renderer = new SpriteRenderer(ResourceManager::GetShader("sprite"));
    // load textures
     ResourceManager::LoadTexture("../images/awesomeface.png", "face");
}

void Game::Update(float dt)
{

}

void Game::ProcessInput(float dt)
{

}

void Game::Render()
{
    Renderer->DrawSprite(ResourceManager::GetTexture("face"), glm::vec2(200.0f, 200.0f), glm::vec2(150.0f, 150.0f), 30.0f, glm::vec3(1.0f, 0.0f, 0.0f));
}