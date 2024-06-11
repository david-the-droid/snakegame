#define SNAKE_GAME_ROW (10U)
#define SNAKE_GAME_COL (10U)

class ConsoleScreen {        // The class
    private: 
     char snakeGameScreen[SNAKE_GAME_ROW][SNAKE_GAME_COL] = {};
    public:              // Access specifier
        void CreateScreen();   // Method/function declaration
};