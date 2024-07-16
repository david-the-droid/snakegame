#include "game_engine.h"
#include "screen/screen.h"
#include "game_logic/snake_game_logic.h"
#include "pattern/pattern.h"

#define GAME_START (0U)
#define GAME_END (2U)
#define GAME_PLAY (1U)
#define BOARDER_LEN (36U)
#define SNAKE_LEN (5U)

typedef enum { start_game = 0, play_game, end_game } states;

static states gameState;

static ConsoleScreen GameScreen;
static SnakeGameLogic SnakeLogic;

void GameLogic::GameEngineInitialisation() { gameState = start_game; }

void GameLogic::GameEngine() {
  switch (gameState) {
  case start_game:

    GameScreen.CreateScreen();

    pattern_t* gameBoarder;
    gameBoarder = SnakeLogic.GenerateBoarder();

    GameScreen.DrawOnScreen(gameBoarder, BOARDER_LEN);

    break;

  default:
    // do nothing
    break;
  }
}
