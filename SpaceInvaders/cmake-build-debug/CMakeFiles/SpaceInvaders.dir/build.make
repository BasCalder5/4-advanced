# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\basca\OneDrive - uantwerpen\School\56-EI\6-advanced\project\4-advanced\SpaceInvaders"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\basca\OneDrive - uantwerpen\School\56-EI\6-advanced\project\4-advanced\SpaceInvaders\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SpaceInvaders.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SpaceInvaders.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SpaceInvaders.dir/flags.make

CMakeFiles/SpaceInvaders.dir/main.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\basca\OneDrive - uantwerpen\School\56-EI\6-advanced\project\4-advanced\SpaceInvaders\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SpaceInvaders.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\main.cpp.obj -c "C:\Users\basca\OneDrive - uantwerpen\School\56-EI\6-advanced\project\4-advanced\SpaceInvaders\main.cpp"

CMakeFiles/SpaceInvaders.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\basca\OneDrive - uantwerpen\School\56-EI\6-advanced\project\4-advanced\SpaceInvaders\main.cpp" > CMakeFiles\SpaceInvaders.dir\main.cpp.i

CMakeFiles/SpaceInvaders.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\basca\OneDrive - uantwerpen\School\56-EI\6-advanced\project\4-advanced\SpaceInvaders\main.cpp" -o CMakeFiles\SpaceInvaders.dir\main.cpp.s

# Object files for target SpaceInvaders
SpaceInvaders_OBJECTS = \
"CMakeFiles/SpaceInvaders.dir/main.cpp.obj"

# External object files for target SpaceInvaders
SpaceInvaders_EXTERNAL_OBJECTS =

SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/main.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/build.make
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/linklibs.rsp
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/objects1.rsp
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\basca\OneDrive - uantwerpen\School\56-EI\6-advanced\project\4-advanced\SpaceInvaders\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SpaceInvaders.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SpaceInvaders.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SpaceInvaders.dir/build: SpaceInvaders.exe

.PHONY : CMakeFiles/SpaceInvaders.dir/build

CMakeFiles/SpaceInvaders.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SpaceInvaders.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SpaceInvaders.dir/clean

CMakeFiles/SpaceInvaders.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\basca\OneDrive - uantwerpen\School\56-EI\6-advanced\project\4-advanced\SpaceInvaders" "C:\Users\basca\OneDrive - uantwerpen\School\56-EI\6-advanced\project\4-advanced\SpaceInvaders" "C:\Users\basca\OneDrive - uantwerpen\School\56-EI\6-advanced\project\4-advanced\SpaceInvaders\cmake-build-debug" "C:\Users\basca\OneDrive - uantwerpen\School\56-EI\6-advanced\project\4-advanced\SpaceInvaders\cmake-build-debug" "C:\Users\basca\OneDrive - uantwerpen\School\56-EI\6-advanced\project\4-advanced\SpaceInvaders\cmake-build-debug\CMakeFiles\SpaceInvaders.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SpaceInvaders.dir/depend

