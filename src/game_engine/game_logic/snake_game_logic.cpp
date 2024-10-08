#include "snake_game_logic.h"
#include "../pattern/pattern.h"

#define OFFSET_ONE (1U)
#define ZERO (0U)

OutputToRender_t *
SnakeGameLogic::GenerateBoarder(unsigned short maxBoarderWidth,
                                unsigned short maxBoarderHeight,
                                unsigned short screenVerticalOffset) {
  static OutputToRender_t snakeGameBoarder;

  unsigned short indexRow,
      indexCol = 0;           // To keep track of current col and row location
  unsigned int colOffset = 1; // Allows algorithm to jump over multiple columns
  char symbolToWrite =
      ' '; // Symbol to write for each coordinate of the boarder
  unsigned short patternIndex = 0; // The pattern array index incrementor

  for (indexRow = 0; indexRow < maxBoarderHeight; indexRow++) {
    for (indexCol = 0; indexCol < maxBoarderWidth; indexCol += colOffset) {
      if (indexRow <= 0 || indexRow == maxBoarderHeight - 1) {
        // First and last row of boarder
        if (indexCol == 0 || indexCol == (maxBoarderWidth - OFFSET_ONE)) {
          symbolToWrite = '+';
        } else {
          symbolToWrite = '-';
        }
      }
      // All other rows of boarder
      else {
        symbolToWrite = '|';
        if (indexCol == (maxBoarderWidth - OFFSET_ONE)) {
          colOffset = 1;
        } else {
          colOffset = (maxBoarderWidth - OFFSET_ONE);
        }
      }
      unsigned short newRow =
          indexRow +
          screenVerticalOffset; // Provides vertical offset to prevent text
                                // clash on command console
      snakeGameBoarder.pattern[patternIndex] = {newRow, indexCol,
                                                symbolToWrite};
      patternIndex++;
    }
  }

  snakeGameBoarder.length = (maxBoarderHeight * maxBoarderWidth);

  return &snakeGameBoarder;
}