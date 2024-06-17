#include "snake_game_logic.h"
#include "screen.h"

#define GAME_START (0U)
#define GAME_END (1U)
#define BOARDER_LEN (36U)

typedef enum  
{
    start_game = 0,
    end_game
} states;

static states gameState; 

static unsigned int snakeGameBoarder[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 19, 20, 29, 30, 39, 40, 49, 50, 59, 60, 69, 70, 79, 80, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
static char snakeGameBoarderSymbol = '*';
static ConsoleScreen GameScreen;

void GameLogic::GameEngineInitialisation()
{
    gameState = start_game; 
}

void GameLogic::GameEngine()
{
    switch(gameState)
    {
        case GAME_START:
            GameScreen.CreateScreen();
            GameScreen.DrawOnScreen(snakeGameBoarder, snakeGameBoarderSymbol, BOARDER_LEN);
            GameScreen.DisplayScreen();
            break;
        default: 
        {
            // do nothing
        }
    }

    
}

