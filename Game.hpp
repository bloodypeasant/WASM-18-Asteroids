#pragma once
#include "Controller.hpp"
#include "Model.hpp"
#include "View.hpp"

class Game
{
public:
  Game();
  // ~Game();

private:
  bool Initialize();

  Controller controller;
  Model model;
  View view;
};
