#include "game_engine.h"
#include "screen/screen.h"

#define BOARDER_LEN (36U)

#define BOARDER_HEIGHT (10U)
#define BOARDER_WIDTH (30U)
#define SCREEN_VERTICAL_OFFSET (2U)

typedef enum { start_game = 0, play_game, end_game } states;

static states gameState;
// static SnakeGameLogic SnakeLogic;
static ConsoleScreen GameScreen;

void GameLogic::GameEngineInitialisation() { gameState = start_game; }

void GameLogic::GameEngine() {
  switch (gameState) {
  case start_game:

    GameScreen.CreateScreen();

//    OutputToRender_t *gameBoarder;
//    gameBoarder = SnakeLogic.GenerateBoarder(BOARDER_WIDTH, BOARDER_HEIGHT,
//                                             SCREEN_VERTICAL_OFFSET);

//    GameScreen.DrawOnScreen(gameBoarder);

    break;

  default:
    // do nothing
    break;
  }
}
