# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\nedod\Documents\GitHub\Project-Sorts

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\nedod\Documents\GitHub\Project-Sorts\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project_Sorts.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Project_Sorts.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Project_Sorts.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_Sorts.dir/flags.make

CMakeFiles/Project_Sorts.dir/main.cpp.obj: CMakeFiles/Project_Sorts.dir/flags.make
CMakeFiles/Project_Sorts.dir/main.cpp.obj: CMakeFiles/Project_Sorts.dir/includes_CXX.rsp
CMakeFiles/Project_Sorts.dir/main.cpp.obj: ../main.cpp
CMakeFiles/Project_Sorts.dir/main.cpp.obj: CMakeFiles/Project_Sorts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\nedod\Documents\GitHub\Project-Sorts\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project_Sorts.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project_Sorts.dir/main.cpp.obj -MF CMakeFiles\Project_Sorts.dir\main.cpp.obj.d -o CMakeFiles\Project_Sorts.dir\main.cpp.obj -c C:\Users\nedod\Documents\GitHub\Project-Sorts\main.cpp

CMakeFiles/Project_Sorts.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_Sorts.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\nedod\Documents\GitHub\Project-Sorts\main.cpp > CMakeFiles\Project_Sorts.dir\main.cpp.i

CMakeFiles/Project_Sorts.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_Sorts.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\nedod\Documents\GitHub\Project-Sorts\main.cpp -o CMakeFiles\Project_Sorts.dir\main.cpp.s

# Object files for target Project_Sorts
Project_Sorts_OBJECTS = \
"CMakeFiles/Project_Sorts.dir/main.cpp.obj"

# External object files for target Project_Sorts
Project_Sorts_EXTERNAL_OBJECTS =

Project_Sorts.exe: CMakeFiles/Project_Sorts.dir/main.cpp.obj
Project_Sorts.exe: CMakeFiles/Project_Sorts.dir/build.make
Project_Sorts.exe: CMakeFiles/Project_Sorts.dir/linklibs.rsp
Project_Sorts.exe: CMakeFiles/Project_Sorts.dir/objects1.rsp
Project_Sorts.exe: CMakeFiles/Project_Sorts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\nedod\Documents\GitHub\Project-Sorts\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Project_Sorts.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Project_Sorts.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_Sorts.dir/build: Project_Sorts.exe
.PHONY : CMakeFiles/Project_Sorts.dir/build

CMakeFiles/Project_Sorts.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Project_Sorts.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Project_Sorts.dir/clean

CMakeFiles/Project_Sorts.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\nedod\Documents\GitHub\Project-Sorts C:\Users\nedod\Documents\GitHub\Project-Sorts C:\Users\nedod\Documents\GitHub\Project-Sorts\cmake-build-debug C:\Users\nedod\Documents\GitHub\Project-Sorts\cmake-build-debug C:\Users\nedod\Documents\GitHub\Project-Sorts\cmake-build-debug\CMakeFiles\Project_Sorts.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project_Sorts.dir/depend
