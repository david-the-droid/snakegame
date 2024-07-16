#include <Windows.h>
#include <cmath>
#include <iostream>

#include "screen.h"

#define SNAKE_GAME_ROW_MAX (100U)
#define SNAKE_GAME_COL_MAX (100U)

static char snakeGameScreen[SNAKE_GAME_ROW_MAX][SNAKE_GAME_COL_MAX] = {};

void ConsoleScreen::CreateScreen() {

  int indexRow, indexCol = 0;
  for (indexRow = 0; indexRow < SNAKE_GAME_ROW_MAX; indexRow++) {
    for (indexCol = 0; indexCol < SNAKE_GAME_COL_MAX; indexCol++) {
      ConsoleScreen::UpdateScreen(indexRow, indexCol, ' ');
    }
  }
}

void ConsoleScreen::DrawOnScreen(pattern_t *patternPtr,
                                 const unsigned int length) {
  unsigned int indexRow;
  unsigned short rowCoordinate, colCoordinate;

  for (indexRow = 0; indexRow < length; indexRow++) {
    pattern_t patternContents = *(patternPtr + indexRow);

    colCoordinate = patternContents.patternCoordinate % 10;
    rowCoordinate = (patternContents.patternCoordinate / 10) % 10;

    ConsoleScreen::UpdateScreen(colCoordinate, rowCoordinate,
                                patternContents.patternSymbol);
  }
}

void ConsoleScreen::UpdateScreen(const unsigned int xCoord,
                                 const unsigned int yCoord, const char symbol) {

  COORD Coord;
  Coord.X = xCoord;
  Coord.Y = yCoord;

  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);

  snakeGameScreen[xCoord][yCoord] = symbol;
  std::cout << snakeGameScreen[xCoord][yCoord];
}