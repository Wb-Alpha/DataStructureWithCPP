# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = /Users/coding/DataStructureWithCPP/Chapter4String

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/coding/DataStructureWithCPP/Chapter4String/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Chapter4String.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Chapter4String.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Chapter4String.dir/flags.make

CMakeFiles/Chapter4String.dir/main.cpp.o: CMakeFiles/Chapter4String.dir/flags.make
CMakeFiles/Chapter4String.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/coding/DataStructureWithCPP/Chapter4String/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Chapter4String.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Chapter4String.dir/main.cpp.o -c /Users/coding/DataStructureWithCPP/Chapter4String/main.cpp

CMakeFiles/Chapter4String.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chapter4String.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/coding/DataStructureWithCPP/Chapter4String/main.cpp > CMakeFiles/Chapter4String.dir/main.cpp.i

CMakeFiles/Chapter4String.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chapter4String.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/coding/DataStructureWithCPP/Chapter4String/main.cpp -o CMakeFiles/Chapter4String.dir/main.cpp.s

# Object files for target Chapter4String
Chapter4String_OBJECTS = \
"CMakeFiles/Chapter4String.dir/main.cpp.o"

# External object files for target Chapter4String
Chapter4String_EXTERNAL_OBJECTS =

Chapter4String: CMakeFiles/Chapter4String.dir/main.cpp.o
Chapter4String: CMakeFiles/Chapter4String.dir/build.make
Chapter4String: CMakeFiles/Chapter4String.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/coding/DataStructureWithCPP/Chapter4String/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Chapter4String"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Chapter4String.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Chapter4String.dir/build: Chapter4String

.PHONY : CMakeFiles/Chapter4String.dir/build

CMakeFiles/Chapter4String.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Chapter4String.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Chapter4String.dir/clean

CMakeFiles/Chapter4String.dir/depend:
	cd /Users/coding/DataStructureWithCPP/Chapter4String/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/coding/DataStructureWithCPP/Chapter4String /Users/coding/DataStructureWithCPP/Chapter4String /Users/coding/DataStructureWithCPP/Chapter4String/cmake-build-debug /Users/coding/DataStructureWithCPP/Chapter4String/cmake-build-debug /Users/coding/DataStructureWithCPP/Chapter4String/cmake-build-debug/CMakeFiles/Chapter4String.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Chapter4String.dir/depend

