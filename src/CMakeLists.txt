
# add library sub-directory
add_subdirectory(MathLib)

add_executable(Demo main.cpp)

# link executable to library
target_link_libraries(Demo PUBLIC MathLib GameScreen)
target_link_libraries(Demo INTERFACE GamePattern)

# set target include directories

target_include_directories(Demo PUBLIC
                          "${PROJECT_SOURCE_DIR}/MathLib"
						  "${PROJECT_SOURCE_DIR}/MathLib/screen"
                          )
						
						
target_include_directories(Demo INTERFACE
						  "${PROJECT_SOURCE_DIR}/MathLib/pattern"
                          )