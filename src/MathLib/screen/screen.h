#ifndef SCREEN_H
#define SCREEN_H

class ConsoleScreen {
private:
  unsigned int snakeGameRowSize;
  unsigned int snakeGameColSize;

  void UpdateScreen(unsigned int xCoord, unsigned int yCoord,
                    const char symbol);

public:
  void CreateScreen();
};

#endif