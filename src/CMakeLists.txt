add_subdirectory(game_engine)

# add executable

add_executable(snakegame main_game.cpp)

# link libraries to target
target_link_libraries(snakegame INTERFACE pattern)
target_link_libraries(snakegame PUBLIC screen snake_game_logic game_engine)

target_include_directories(snakegame PUBLIC 
                           "${PROJECT_SOURCE_DIR}/src/game_engine/pattern"
						   "${PROJECT_SOURCE_DIR}/src/game_engine/screen"
						   "${PROJECT_SOURCE_DIR}/src/game_engine/game_logic"
						   "${PROJECT_SOURCE_DIR}/src/game_engine"
						   )