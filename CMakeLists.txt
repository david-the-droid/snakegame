cmake_minimum_required(VERSION 3.15)
 
# set project name/version
project(snakegame VERSION 1.0)

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

# add src, target links and libraries handled here
add_subdirectory(src)
