#ifndef SCREEN_H
#define SCREEN_H

struct test;

class ConsoleScreen {
private:
#define SNAKE_GAME_ROW (10U)
#define SNAKE_GAME_COL (10U)
  char snakeGameScreen[SNAKE_GAME_ROW][SNAKE_GAME_COL] = {};
  void UpdateScreen(unsigned int xCoord, unsigned int yCoord,
                    const char symbol);

public:
  void CreateScreen();
  void DrawOnScreen(const unsigned int *patternPtr, const char symbol,
                    const unsigned int length);
};

#endif