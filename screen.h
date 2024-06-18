#ifndef SCREEN_H
#define SCREEN_H

#define SNAKE_GAME_ROW (10U)
#define SNAKE_GAME_COL (10U)

struct test;

class ConsoleScreen { // The class
private:
  char snakeGameScreen[SNAKE_GAME_ROW][SNAKE_GAME_COL] = {};

public:                // Access specifier
  void CreateScreen(); // Method/function declaration
  void DrawOnScreen(const unsigned int *patternPtr, const char symbol,
                    const unsigned int length);
  void DisplayScreen();
};

#endif