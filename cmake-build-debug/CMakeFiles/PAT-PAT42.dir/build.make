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
include CMakeFiles/PAT-PAT42.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PAT-PAT42.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PAT-PAT42.dir/flags.make

CMakeFiles/PAT-PAT42.dir/PAT/PAT42.cpp.o: CMakeFiles/PAT-PAT42.dir/flags.make
CMakeFiles/PAT-PAT42.dir/PAT/PAT42.cpp.o: ../PAT/PAT42.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PAT-PAT42.dir/PAT/PAT42.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PAT-PAT42.dir/PAT/PAT42.cpp.o -c /Users/zhouzian/Documents/work_space/patTest/PAT/PAT42.cpp

CMakeFiles/PAT-PAT42.dir/PAT/PAT42.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PAT-PAT42.dir/PAT/PAT42.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhouzian/Documents/work_space/patTest/PAT/PAT42.cpp > CMakeFiles/PAT-PAT42.dir/PAT/PAT42.cpp.i

CMakeFiles/PAT-PAT42.dir/PAT/PAT42.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PAT-PAT42.dir/PAT/PAT42.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhouzian/Documents/work_space/patTest/PAT/PAT42.cpp -o CMakeFiles/PAT-PAT42.dir/PAT/PAT42.cpp.s

# Object files for target PAT-PAT42
PAT__PAT42_OBJECTS = \
"CMakeFiles/PAT-PAT42.dir/PAT/PAT42.cpp.o"

# External object files for target PAT-PAT42
PAT__PAT42_EXTERNAL_OBJECTS =

PAT-PAT42: CMakeFiles/PAT-PAT42.dir/PAT/PAT42.cpp.o
PAT-PAT42: CMakeFiles/PAT-PAT42.dir/build.make
PAT-PAT42: CMakeFiles/PAT-PAT42.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PAT-PAT42"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PAT-PAT42.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PAT-PAT42.dir/build: PAT-PAT42

.PHONY : CMakeFiles/PAT-PAT42.dir/build

CMakeFiles/PAT-PAT42.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PAT-PAT42.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PAT-PAT42.dir/clean

CMakeFiles/PAT-PAT42.dir/depend:
	cd /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles/PAT-PAT42.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PAT-PAT42.dir/depend

