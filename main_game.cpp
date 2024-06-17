#include <iostream>
#include <string>
#include <time.h>

#include "screen.h"
#include "snake_game_logic.h"

int main()
{
    GameLogic GameObj;
    GameObj.GameEngineInitialisation();
    GameObj.GameEngine();

    return 0;
}