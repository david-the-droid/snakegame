add_subdirectory(game_engine)

# add executable

add_executable(snakegame main_game.cpp)

# link libraries to target

target_link_libraries(snakegame PUBLIC game_engine screen)

# link include directories

target_include_directories(snakegame PUBLIC 
                           "${PROJECT_SOURCE_DIR}/game_engine"
						   "${PROJECT_SOURCE_DIR}/game_engine/pattern"
						   "${PROJECT_SOURCE_DIR}/game_engine/screen"
						   "${PROJECT_SOURCE_DIR}/game_engine/game_logic"
						   )