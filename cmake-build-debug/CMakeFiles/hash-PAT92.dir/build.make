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
include CMakeFiles/hash-PAT92.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hash-PAT92.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hash-PAT92.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hash-PAT92.dir/flags.make

CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.o: CMakeFiles/hash-PAT92.dir/flags.make
CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.o: ../PAT/hash/PAT92.cpp
CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.o: CMakeFiles/hash-PAT92.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.o -MF CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.o.d -o CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.o -c /Users/zhouzian/Documents/work_space/patTest/PAT/hash/PAT92.cpp

CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhouzian/Documents/work_space/patTest/PAT/hash/PAT92.cpp > CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.i

CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhouzian/Documents/work_space/patTest/PAT/hash/PAT92.cpp -o CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.s

# Object files for target hash-PAT92
hash__PAT92_OBJECTS = \
"CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.o"

# External object files for target hash-PAT92
hash__PAT92_EXTERNAL_OBJECTS =

hash-PAT92: CMakeFiles/hash-PAT92.dir/PAT/hash/PAT92.cpp.o
hash-PAT92: CMakeFiles/hash-PAT92.dir/build.make
hash-PAT92: CMakeFiles/hash-PAT92.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hash-PAT92"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hash-PAT92.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hash-PAT92.dir/build: hash-PAT92
.PHONY : CMakeFiles/hash-PAT92.dir/build

CMakeFiles/hash-PAT92.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hash-PAT92.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hash-PAT92.dir/clean

CMakeFiles/hash-PAT92.dir/depend:
	cd /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug /Users/zhouzian/Documents/work_space/patTest/cmake-build-debug/CMakeFiles/hash-PAT92.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hash-PAT92.dir/depend

