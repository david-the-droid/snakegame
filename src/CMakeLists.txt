add_subdirectory(game_engine)

# add executable

add_executable(snakegame main_game.cpp)

# link libraries to target
target_link_libraries(snakegame INTERFACE pattern)
target_link_libraries(snakegame PUBLIC screen snake_game_logic snake_game_engine)

target_include_directories(snakegame INTERFACE 
						   "${PROJECT_SOURCE_DIR}/game_engine/pattern"
						   )

target_include_directories(snakegame PUBLIC 
						   "${PROJECT_SOURCE_DIR}/game_engine"
						   "${PROJECT_SOURCE_DIR}/game_engine/screen"
						   "${PROJECT_SOURCE_DIR}/game_engine/game_logic"
						   )
						   
						   