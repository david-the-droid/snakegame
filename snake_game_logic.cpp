#include "snake_game_logic.h"
#include "screen.h"

#define GAME_START (0U)
#define GAME_END (2U)
#define GAME_PLAY (1U)
#define BOARDER_LEN (36U)
#define SNAKE_LEN (5U)

typedef enum { start_game = 0, play_game, end_game } states;

static states gameState;

static unsigned int snakeGameBoarder[] = {
    0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 19, 20, 29, 30, 39, 40, 49,
    50, 59, 60, 69, 70, 79, 80, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
static char snakeGameBoarderSymbol = '*';
static unsigned int snakePos[SNAKE_LEN] = {24, 25, 26, 36, 37};
static char snakeSymbol = '#';
static ConsoleScreen GameScreen;

void GameLogic::GameEngineInitialisation() { gameState = start_game; }

void GameLogic::GameEngine() 
{
  switch (gameState){
    case start_game:
      GameScreen.CreateScreen();
      GameScreen.DrawOnScreen(snakeGameBoarder, snakeGameBoarderSymbol,
                              BOARDER_LEN);

      GameScreen.DrawOnScreen(snakePos, snakeSymbol, SNAKE_LEN);
      break;

    default: 
      // do nothing
      break;
  }
}
