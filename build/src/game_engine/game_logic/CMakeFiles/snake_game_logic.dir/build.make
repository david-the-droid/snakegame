# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/repos_workspace/repos/git/snakegame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/repos_workspace/repos/git/snakegame/build

# Include any dependencies generated for this target.
include src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/compiler_depend.make

# Include the progress variables for this target.
include src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/progress.make

# Include the compile flags for this target's objects.
include src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/flags.make

src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.obj: src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/flags.make
src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.obj: C:/repos_workspace/repos/git/snakegame/src/game_engine/game_logic/snake_game_logic.cpp
src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.obj: src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/repos_workspace/repos/git/snakegame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.obj"
	cd C:/repos_workspace/repos/git/snakegame/build/src/game_engine/game_logic && C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.obj -MF CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.obj.d -o CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.obj -c C:/repos_workspace/repos/git/snakegame/src/game_engine/game_logic/snake_game_logic.cpp

src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.i"
	cd C:/repos_workspace/repos/git/snakegame/build/src/game_engine/game_logic && C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/repos_workspace/repos/git/snakegame/src/game_engine/game_logic/snake_game_logic.cpp > CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.i

src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.s"
	cd C:/repos_workspace/repos/git/snakegame/build/src/game_engine/game_logic && C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/repos_workspace/repos/git/snakegame/src/game_engine/game_logic/snake_game_logic.cpp -o CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.s

# Object files for target snake_game_logic
snake_game_logic_OBJECTS = \
"CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.obj"

# External object files for target snake_game_logic
snake_game_logic_EXTERNAL_OBJECTS =

src/game_engine/game_logic/libsnake_game_logic.a: src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/snake_game_logic.cpp.obj
src/game_engine/game_logic/libsnake_game_logic.a: src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/build.make
src/game_engine/game_logic/libsnake_game_logic.a: src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:/repos_workspace/repos/git/snakegame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libsnake_game_logic.a"
	cd C:/repos_workspace/repos/git/snakegame/build/src/game_engine/game_logic && $(CMAKE_COMMAND) -P CMakeFiles/snake_game_logic.dir/cmake_clean_target.cmake
	cd C:/repos_workspace/repos/git/snakegame/build/src/game_engine/game_logic && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/snake_game_logic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/build: src/game_engine/game_logic/libsnake_game_logic.a
.PHONY : src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/build

src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/clean:
	cd C:/repos_workspace/repos/git/snakegame/build/src/game_engine/game_logic && $(CMAKE_COMMAND) -P CMakeFiles/snake_game_logic.dir/cmake_clean.cmake
.PHONY : src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/clean

src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/repos_workspace/repos/git/snakegame C:/repos_workspace/repos/git/snakegame/src/game_engine/game_logic C:/repos_workspace/repos/git/snakegame/build C:/repos_workspace/repos/git/snakegame/build/src/game_engine/game_logic C:/repos_workspace/repos/git/snakegame/build/src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/game_engine/game_logic/CMakeFiles/snake_game_logic.dir/depend
