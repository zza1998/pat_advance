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
include CMakeFiles/mainOpt-vectorTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mainOpt-vectorTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mainOpt-vectorTest.dir/flags.make

CMakeFiles/mainOpt-vectorTest.dir/mainOpt/vectorTest.cpp.o: CMakeFiles/mainOpt-vectorTest.dir/flags.make
CMakeFiles/mainOpt-vectorTest.dir/mainOpt/vectorTest.cpp.o: ../mainOpt/vectorTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mainOpt-vectorTest.dir/mainOpt/vectorTest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mainOpt-vectorTest.dir/mainOpt/vectorTest.cpp.o -c /Users/zhouzian/Documents/work_space/patTest/mainOpt/vectorTest.cpp

CMakeFiles/mainOpt-vectorTest.dir/mainOpt/vectorTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainOpt-vectorTest.dir/mainOpt/vectorTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhouzian/Documents/work_space/patTest/mainOpt/vectorTest.cpp > CMakeFiles/mainOpt-vectorTest.dir/mainOpt/vectorTest.cpp.i

CMakeFiles/mainOpt-vectorTest.dir/mainOpt/vectorTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainOpt-vectorTest.dir/mainOpt/vectorTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhouzian/Documents/work_space/patTest/mainOpt/vectorTest.cpp -o CMakeFiles/mainOpt-vectorTest.dir/mainOpt/vectorTest.cpp.s

# Object files for target mainOpt-vectorTest
mainOpt__vectorTest_OBJECTS = \
"CMakeFiles/mainOpt-vectorTest.dir/mainOpt/vectorTest.cpp.o"

# External object files for target mainOpt-vectorTest
mainOpt__vectorTest_EXTERNAL_OBJECTS =

mainOpt-vectorTest: CMakeFiles/mainOpt-vectorTest.dir/mainOpt/vectorTest.cpp.o
mainOpt-vectorTest: CMakeFiles/mainOpt-vectorTest.dir/build.make
mainOpt-vectorTest: CMakeFiles/mainOpt-vectorTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mainOpt-vectorTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mainOpt-vectorTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mainOpt-vectorTest.dir/build: mainOpt-vectorTest

.PHONY : CMakeFiles/mainOpt-vectorTest.dir/build

CMakeFiles/mainOpt-vectorTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mainOpt-vectorTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mainOpt-vectorTest.dir/clean

CMakeFiles/mainOpt-vectorTest.dir/depend:
	cd /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles/mainOpt-vectorTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mainOpt-vectorTest.dir/depend

