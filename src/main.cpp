#include <iostream>
#include <string>
#include <time.h>

#include "MathLib/game_engine.h"

int main() {
  GameLogic Game;
  Game.GameEngineInitialisation();
  Game.GameEngine();

  return 0;
}