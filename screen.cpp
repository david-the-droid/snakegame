#include <cmath>
#include <iostream>

#include "screen.h"

#define SNAKE_GAME_ROW (10U)
#define SNAKE_GAME_COL (10U)
#define BOARDER_LEN (36U)

void ConsoleScreen::CreateScreen() {
  int indexRow, indexCol = 0;

  for (indexRow = 0; indexRow < SNAKE_GAME_ROW; indexRow++) {
    for (indexCol = 0; indexCol < SNAKE_GAME_COL; indexCol++) {
      snakeGameScreen[indexRow][indexCol] = ' ';
    }
  }
}

void ConsoleScreen::DrawOnScreen(const unsigned int *patternPtr,
                                 const char symbol, const unsigned int length) {
  unsigned int indexRow;
  unsigned short rowCoordinate, colCoordinate;

  for (indexRow = 0; indexRow < length; indexRow++) {
    unsigned int boarderValue = *(patternPtr + indexRow);

    colCoordinate = boarderValue % 10;
    rowCoordinate = (boarderValue / 10) % 10;

    snakeGameScreen[rowCoordinate][colCoordinate] = symbol;
  }

  // todo: Update an individual part of the display on the console
}

void ConsoleScreen::DisplayScreen() {
  unsigned int indexRow, indexCol;

  for (indexRow = 0; indexRow < SNAKE_GAME_ROW; indexRow++) {
    for (indexCol = 0; indexCol < SNAKE_GAME_COL; indexCol++) {
      std::cout << snakeGameScreen[indexRow][indexCol] << " ";
    }
    std::cout << "\n";
  }
}