#include <iostream>
#include <string>
#include <time.h>

#include "game_engine/game_engine.h"

int main() {
  GameLogic Game;
  Game.GameEngineInitialisation();
  Game.GameEngine();

  return 0;
}