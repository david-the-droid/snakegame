#include <iostream>
#include <string>
#include <time.h>

#include "game_engine/game_engine.h"

int main() {
  GameLogic GameObj;
  GameObj.GameEngineInitialisation();
  GameObj.GameEngine();

  return 0;
}