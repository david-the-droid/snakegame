#include <Windows.h>
#include <cmath>
#include <iostream>

#include "screen.h"

#define BOARDER_LEN (36U)

void ConsoleScreen::CreateScreen() {
  int indexRow, indexCol = 0;

  for (indexRow = 0; indexRow < SNAKE_GAME_ROW; indexRow++) {
    for (indexCol = 0; indexCol < SNAKE_GAME_COL; indexCol++) {
      ConsoleScreen::UpdateScreen(indexRow, indexCol, ' ');
    }
  }
}

void ConsoleScreen::DrawOnScreen(pattern_t *patternPtr, const unsigned int length) {
  unsigned int indexRow;
  unsigned short rowCoordinate, colCoordinate;

  for (indexRow = 0; indexRow < length; indexRow++) {
    pattern_t patternContents = *(patternPtr + indexRow);

    colCoordinate = patternContents.patternCoordinate % 10;
    rowCoordinate = (patternContents.patternCoordinate / 10) % 10;

    ConsoleScreen::UpdateScreen(colCoordinate, rowCoordinate, patternContents.patternSymbol);
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

  /* Reset position */
  Coord.X = 0U;
  Coord.Y = SNAKE_GAME_ROW;

  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
}