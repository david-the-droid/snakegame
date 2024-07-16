#ifndef SCREEN_H
#define SCREEN_H

#include "../pattern/pattern.h"

class ConsoleScreen {
private:
#define SNAKE_GAME_ROW (10U)
#define SNAKE_GAME_COL (10U)
  char snakeGameScreen[SNAKE_GAME_ROW][SNAKE_GAME_COL] = {};
  void UpdateScreen(unsigned int xCoord, unsigned int yCoord,
                    const char symbol);

public:
  void CreateScreen();
  void DrawOnScreen(pattern_t *patternPtr, const unsigned int length);
};

#endif