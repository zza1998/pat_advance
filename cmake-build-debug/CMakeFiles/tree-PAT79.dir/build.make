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
include CMakeFiles/tree-PAT79.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tree-PAT79.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tree-PAT79.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tree-PAT79.dir/flags.make

CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.o: CMakeFiles/tree-PAT79.dir/flags.make
CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.o: ../PAT/tree/PAT79.cpp
CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.o: CMakeFiles/tree-PAT79.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.o -MF CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.o.d -o CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.o -c /Users/zhouzian/Documents/work_space/patTest/PAT/tree/PAT79.cpp

CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhouzian/Documents/work_space/patTest/PAT/tree/PAT79.cpp > CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.i

CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhouzian/Documents/work_space/patTest/PAT/tree/PAT79.cpp -o CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.s

# Object files for target tree-PAT79
tree__PAT79_OBJECTS = \
"CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.o"

# External object files for target tree-PAT79
tree__PAT79_EXTERNAL_OBJECTS =

tree-PAT79: CMakeFiles/tree-PAT79.dir/PAT/tree/PAT79.cpp.o
tree-PAT79: CMakeFiles/tree-PAT79.dir/build.make
tree-PAT79: CMakeFiles/tree-PAT79.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tree-PAT79"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tree-PAT79.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tree-PAT79.dir/build: tree-PAT79
.PHONY : CMakeFiles/tree-PAT79.dir/build

CMakeFiles/tree-PAT79.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tree-PAT79.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tree-PAT79.dir/clean

CMakeFiles/tree-PAT79.dir/depend:
	cd /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles/tree-PAT79.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tree-PAT79.dir/depend

