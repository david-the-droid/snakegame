# configure Cmake and warnings

cmake_minimum_required(VERSION 3.10)

project(SnakeGame VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # additional warnings
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# project configuration

# add subdirectories and libraries
add_subdirectory(src)

add_executable(SnakeGame src/main.cpp)

# link executable to library
target_link_libraries(SnakeGame PUBLIC GameEngine GameScreen SnakeGameLogic)
target_link_libraries(SnakeGame INTERFACE GamePattern)

# set target include directories
target_include_directories(SnakeGame PUBLIC
                          "${PROJECT_SOURCE_DIR}/src/game_engine"
						  "${PROJECT_SOURCE_DIR}/src/game_engine/screen"
						  "${PROJECT_SOURCE_DIR}/src/game_engine/game_logic"
                          )

target_include_directories(SnakeGame INTERFACE
						  "${PROJECT_SOURCE_DIR}/src/game_engine/pattern"
						  )