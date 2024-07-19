#include "snake_game_logic.h"

OutputToRender_t *SnakeGameLogic::GenerateBoarder(unsigned short maxBoarderWidth, unsigned short maxBoarderHeight)
{
    static OutputToRender_t snakeGameBoarder;

    unsigned short indexRow, indexCol = 0;
    unsigned int colOffset = 1;
    char symbolToWrite = ' ';
    unsigned short patternIndex = 0;

    for (indexRow = 0; indexRow < maxBoarderHeight; indexRow++) {
        for (indexCol = 0; indexCol < maxBoarderWidth; indexCol += colOffset) {
            if (indexRow <= 0 || indexRow == maxBoarderHeight-1)
            {
                if(indexCol == 0 || indexCol == maxBoarderWidth-1)
                {
                    symbolToWrite = '+';
                }
                else 
                {
                    symbolToWrite = '-';
                }
            }
            else
            {
                symbolToWrite = '|';
                if(indexCol == maxBoarderWidth-1)
                {
                    colOffset = 1;
                }
                else
                {
                    colOffset = maxBoarderWidth-1;
                }
                
            }     
            unsigned short newRow = indexRow + 2;
            snakeGameBoarder.pattern[patternIndex] = {newRow, indexCol, symbolToWrite};
            patternIndex++;
        }
    }

    snakeGameBoarder.length = (maxBoarderHeight * maxBoarderWidth);
    
    return &snakeGameBoarder; 
}