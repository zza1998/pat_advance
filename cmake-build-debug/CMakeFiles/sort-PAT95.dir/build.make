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
include CMakeFiles/sort-PAT95.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sort-PAT95.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sort-PAT95.dir/flags.make

CMakeFiles/sort-PAT95.dir/PAT/sort/PAT95.cpp.o: CMakeFiles/sort-PAT95.dir/flags.make
CMakeFiles/sort-PAT95.dir/PAT/sort/PAT95.cpp.o: ../PAT/sort/PAT95.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sort-PAT95.dir/PAT/sort/PAT95.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort-PAT95.dir/PAT/sort/PAT95.cpp.o -c /Users/zhouzian/Documents/work_space/patTest/PAT/sort/PAT95.cpp

CMakeFiles/sort-PAT95.dir/PAT/sort/PAT95.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort-PAT95.dir/PAT/sort/PAT95.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhouzian/Documents/work_space/patTest/PAT/sort/PAT95.cpp > CMakeFiles/sort-PAT95.dir/PAT/sort/PAT95.cpp.i

CMakeFiles/sort-PAT95.dir/PAT/sort/PAT95.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort-PAT95.dir/PAT/sort/PAT95.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhouzian/Documents/work_space/patTest/PAT/sort/PAT95.cpp -o CMakeFiles/sort-PAT95.dir/PAT/sort/PAT95.cpp.s

# Object files for target sort-PAT95
sort__PAT95_OBJECTS = \
"CMakeFiles/sort-PAT95.dir/PAT/sort/PAT95.cpp.o"

# External object files for target sort-PAT95
sort__PAT95_EXTERNAL_OBJECTS =

sort-PAT95: CMakeFiles/sort-PAT95.dir/PAT/sort/PAT95.cpp.o
sort-PAT95: CMakeFiles/sort-PAT95.dir/build.make
sort-PAT95: CMakeFiles/sort-PAT95.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sort-PAT95"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sort-PAT95.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sort-PAT95.dir/build: sort-PAT95

.PHONY : CMakeFiles/sort-PAT95.dir/build

CMakeFiles/sort-PAT95.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sort-PAT95.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sort-PAT95.dir/clean

CMakeFiles/sort-PAT95.dir/depend:
	cd /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles/sort-PAT95.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sort-PAT95.dir/depend

