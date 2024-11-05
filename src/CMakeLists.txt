
# add library sub-directory
add_subdirectory(game_engine)

add_executable(Demo main.cpp)

# link executable to library
target_link_libraries(Demo PUBLIC GameEngine GameScreen SnakeGameLogic)
target_link_libraries(Demo INTERFACE GamePattern)

# set target include directories

target_include_directories(Demo PUBLIC
                          "${PROJECT_SOURCE_DIR}/game_engine"
						  "${PROJECT_SOURCE_DIR}/game_engine/screen"
						  "${PROJECT_SOURCE_DIR}/game_engine/game_logic"
                          )
						
						
target_include_directories(Demo INTERFACE
						  "${PROJECT_SOURCE_DIR}/game_engine/pattern"
                          )