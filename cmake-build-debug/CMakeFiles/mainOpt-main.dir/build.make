# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhouzian/Documents/work_space/patTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mainOpt-main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mainOpt-main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mainOpt-main.dir/flags.make

CMakeFiles/mainOpt-main.dir/mainOpt/main.cpp.o: CMakeFiles/mainOpt-main.dir/flags.make
CMakeFiles/mainOpt-main.dir/mainOpt/main.cpp.o: ../mainOpt/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mainOpt-main.dir/mainOpt/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mainOpt-main.dir/mainOpt/main.cpp.o -c /Users/zhouzian/Documents/work_space/patTest/mainOpt/main.cpp

CMakeFiles/mainOpt-main.dir/mainOpt/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainOpt-main.dir/mainOpt/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhouzian/Documents/work_space/patTest/mainOpt/main.cpp > CMakeFiles/mainOpt-main.dir/mainOpt/main.cpp.i

CMakeFiles/mainOpt-main.dir/mainOpt/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainOpt-main.dir/mainOpt/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhouzian/Documents/work_space/patTest/mainOpt/main.cpp -o CMakeFiles/mainOpt-main.dir/mainOpt/main.cpp.s

# Object files for target mainOpt-main
mainOpt__main_OBJECTS = \
"CMakeFiles/mainOpt-main.dir/mainOpt/main.cpp.o"

# External object files for target mainOpt-main
mainOpt__main_EXTERNAL_OBJECTS =

mainOpt-main: CMakeFiles/mainOpt-main.dir/mainOpt/main.cpp.o
mainOpt-main: CMakeFiles/mainOpt-main.dir/build.make
mainOpt-main: CMakeFiles/mainOpt-main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mainOpt-main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mainOpt-main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mainOpt-main.dir/build: mainOpt-main

.PHONY : CMakeFiles/mainOpt-main.dir/build

CMakeFiles/mainOpt-main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mainOpt-main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mainOpt-main.dir/clean

CMakeFiles/mainOpt-main.dir/depend:
	cd /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles/mainOpt-main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mainOpt-main.dir/depend

