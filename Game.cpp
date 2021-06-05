#include <emscripten.h>
#include "Game.hpp"
#include <stdio.h>

// #include <SDL2/SDL.h>
// #include <SDL2/SDL_image.h>
// #include <stdbool.h>
// #include <math.h>
// #include <string>
// #include <vector>
// #include <cstdlib>

void game_loop()
{
  printf("game_loop()\n");
}

Game::Game()
{
  printf("Game::Game()\n");
  Initialize();
}

bool Game::Initialize()
{
  printf("Game::Initialize()\n");
  emscripten_set_main_loop(game_loop, 0, 0);
  return true;
}
