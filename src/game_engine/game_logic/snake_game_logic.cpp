#include "snake_game_logic.h"

#define SNAKE_GAME_BOARDER (36U)

static pattern_t snakeGameBoarder[SNAKE_GAME_BOARDER] = {
        {0, '+'}, 
        {1, '-'},
        {2, '-'},
        {3, '-'},
        {4, '-'},
        {5, '-'},
        {6, '-'},
        {7, '-'},
        {8, '-'},
        {9, '+'},
        {10, '|'},
        {19, '|'},
        {20, '|'},
        {29, '|'},
        {30, '|'},
        {39, '|'},
        {40, '|'},
        {49, '|'},
        {50, '|'},
        {59, '|'},
        {60, '|'},
        {69, '|'},
        {70, '|'},
        {79, '|'},
        {80, '|'},
        {89, '|'},
        {90, '+'},
        {91, '-'},
        {92, '-'},
        {93, '-'},
        {94, '-'},
        {95, '-'},
        {96, '-'},
        {97, '-'},
        {98, '-'},
        {99, '+'},
};

pattern_t* SnakeGameLogic::GenerateBoarder()
{
    return snakeGameBoarder;
}