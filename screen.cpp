#include <iostream>
#include <cmath>

#include "screen.h"

#define SNAKE_GAME_ROW (10U)
#define SNAKE_GAME_COL (10U)
#define BOARDER_LEN (36U)

// Method/function definition outside the class
void ConsoleScreen::CreateScreen() {

    unsigned short value = 56, result1 = 0, result2 = 0;

    unsigned short snakeGameBoarder[BOARDER_LEN] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 19, 20, 29, 30, 39, 40, 49, 50, 59, 60, 69, 70, 79, 80, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
    char snakeGameBoarderSymbol = '*';

    int indexRow, indexCol = 0; 

    unsigned short rowCoordinate, colCoordinate;

    char snakeGameScreen[SNAKE_GAME_ROW][SNAKE_GAME_COL] = {};

    for(indexRow = 0; indexRow < SNAKE_GAME_ROW; indexRow++)
    {
        for(indexCol = 0; indexCol < SNAKE_GAME_COL; indexCol++)
        {
            snakeGameScreen[indexRow][indexCol] = ' ';
        }
    }

    for(indexRow = 0; indexRow < BOARDER_LEN; indexRow++)
    {
        int boarderValue = snakeGameBoarder[indexRow];

        colCoordinate = boarderValue % 10;
        rowCoordinate = (boarderValue/10) % 10;

        snakeGameScreen[rowCoordinate][colCoordinate] = snakeGameBoarderSymbol;
    }

    for(indexRow = 0; indexRow < SNAKE_GAME_ROW; indexRow++)
    {
        for(indexCol = 0; indexCol < SNAKE_GAME_COL; indexCol++)
        {
            std::cout << snakeGameScreen[indexRow][indexCol] << " ";
        }
        std::cout << "\n";
    }
}