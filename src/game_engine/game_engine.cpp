#include "game_engine.h"
#include "game_logic/snake_game_logic.h"
#include "pattern/pattern.h"
#include "screen/screen.h"

#define BOARDER_LEN (36U)

typedef enum { start_game = 0, play_game, end_game } states;

static states gameState;
static SnakeGameLogic SnakeLogic;
static ConsoleScreen GameScreen;

void GameLogic::GameEngineInitialisation() { gameState = start_game; }

void GameLogic::GameEngine() {
  switch (gameState) {
  case start_game:

    GameScreen.CreateScreen();

    pattern_t *gameBoarder;
    gameBoarder = SnakeLogic.GenerateBoarder();

    GameScreen.DrawOnScreen(gameBoarder, BOARDER_LEN);

    break;

  default:
    // do nothing
      break;
  }
}
