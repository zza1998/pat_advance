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
include CMakeFiles/sort-PAT55.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sort-PAT55.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sort-PAT55.dir/flags.make

CMakeFiles/sort-PAT55.dir/PAT/sort/PAT55.cpp.o: CMakeFiles/sort-PAT55.dir/flags.make
CMakeFiles/sort-PAT55.dir/PAT/sort/PAT55.cpp.o: ../PAT/sort/PAT55.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sort-PAT55.dir/PAT/sort/PAT55.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort-PAT55.dir/PAT/sort/PAT55.cpp.o -c /Users/zhouzian/Documents/work_space/patTest/PAT/sort/PAT55.cpp

CMakeFiles/sort-PAT55.dir/PAT/sort/PAT55.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort-PAT55.dir/PAT/sort/PAT55.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhouzian/Documents/work_space/patTest/PAT/sort/PAT55.cpp > CMakeFiles/sort-PAT55.dir/PAT/sort/PAT55.cpp.i

CMakeFiles/sort-PAT55.dir/PAT/sort/PAT55.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort-PAT55.dir/PAT/sort/PAT55.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhouzian/Documents/work_space/patTest/PAT/sort/PAT55.cpp -o CMakeFiles/sort-PAT55.dir/PAT/sort/PAT55.cpp.s

# Object files for target sort-PAT55
sort__PAT55_OBJECTS = \
"CMakeFiles/sort-PAT55.dir/PAT/sort/PAT55.cpp.o"

# External object files for target sort-PAT55
sort__PAT55_EXTERNAL_OBJECTS =

sort-PAT55: CMakeFiles/sort-PAT55.dir/PAT/sort/PAT55.cpp.o
sort-PAT55: CMakeFiles/sort-PAT55.dir/build.make
sort-PAT55: CMakeFiles/sort-PAT55.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sort-PAT55"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sort-PAT55.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sort-PAT55.dir/build: sort-PAT55

.PHONY : CMakeFiles/sort-PAT55.dir/build

CMakeFiles/sort-PAT55.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sort-PAT55.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sort-PAT55.dir/clean

CMakeFiles/sort-PAT55.dir/depend:
	cd /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles/sort-PAT55.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sort-PAT55.dir/depend

