#ifndef SCREEN_H
#define SCREEN_H

#include "../pattern/pattern.h"

class ConsoleScreen {
private:
  unsigned int snakeGameRowSize;
  unsigned int snakeGameColSize;

  void UpdateScreen(unsigned int xCoord, unsigned int yCoord,
                    const char symbol);

public:
  void CreateScreen();
  void DrawOnScreen(pattern_t *patternPtr, const unsigned int length);
};

#endif