#ifndef SNAKE_GAME_LOGIC_H
#define SNAKE_GAME_LOGIC_H

#include "../pattern/pattern.h"

class SnakeGameLogic {
private:
public:
  OutputToRender_t *GenerateBoarder(unsigned short maxBoarderWidth, unsigned short maxBoarderHeight, unsigned short screenVerticalOffset);
};

#endif
