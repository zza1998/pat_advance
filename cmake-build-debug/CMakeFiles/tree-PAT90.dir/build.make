# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
include CMakeFiles/tree-PAT90.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tree-PAT90.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tree-PAT90.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tree-PAT90.dir/flags.make

CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.o: CMakeFiles/tree-PAT90.dir/flags.make
CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.o: ../PAT/tree/PAT90.cpp
CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.o: CMakeFiles/tree-PAT90.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.o -MF CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.o.d -o CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.o -c /Users/zhouzian/Documents/work_space/patTest/PAT/tree/PAT90.cpp

CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhouzian/Documents/work_space/patTest/PAT/tree/PAT90.cpp > CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.i

CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhouzian/Documents/work_space/patTest/PAT/tree/PAT90.cpp -o CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.s

# Object files for target tree-PAT90
tree__PAT90_OBJECTS = \
"CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.o"

# External object files for target tree-PAT90
tree__PAT90_EXTERNAL_OBJECTS =

tree-PAT90: CMakeFiles/tree-PAT90.dir/PAT/tree/PAT90.cpp.o
tree-PAT90: CMakeFiles/tree-PAT90.dir/build.make
tree-PAT90: CMakeFiles/tree-PAT90.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tree-PAT90"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tree-PAT90.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tree-PAT90.dir/build: tree-PAT90
.PHONY : CMakeFiles/tree-PAT90.dir/build

CMakeFiles/tree-PAT90.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tree-PAT90.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tree-PAT90.dir/clean

CMakeFiles/tree-PAT90.dir/depend:
	cd /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles/tree-PAT90.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tree-PAT90.dir/depend

