# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\java\c\cpp-examples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\java\c\cpp-examples\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Pointer-2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Pointer-2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pointer-2.dir/flags.make

CMakeFiles/Pointer-2.dir/c-test/Pointer-2.c.obj: CMakeFiles/Pointer-2.dir/flags.make
CMakeFiles/Pointer-2.dir/c-test/Pointer-2.c.obj: ../c-test/Pointer-2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\java\c\cpp-examples\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Pointer-2.dir/c-test/Pointer-2.c.obj"
	C:\java\c\mingw-w64_64bit\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Pointer-2.dir\c-test\Pointer-2.c.obj -c C:\java\c\cpp-examples\c-test\Pointer-2.c

CMakeFiles/Pointer-2.dir/c-test/Pointer-2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Pointer-2.dir/c-test/Pointer-2.c.i"
	C:\java\c\mingw-w64_64bit\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\java\c\cpp-examples\c-test\Pointer-2.c > CMakeFiles\Pointer-2.dir\c-test\Pointer-2.c.i

CMakeFiles/Pointer-2.dir/c-test/Pointer-2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Pointer-2.dir/c-test/Pointer-2.c.s"
	C:\java\c\mingw-w64_64bit\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\java\c\cpp-examples\c-test\Pointer-2.c -o CMakeFiles\Pointer-2.dir\c-test\Pointer-2.c.s

# Object files for target Pointer-2
Pointer__2_OBJECTS = \
"CMakeFiles/Pointer-2.dir/c-test/Pointer-2.c.obj"

# External object files for target Pointer-2
Pointer__2_EXTERNAL_OBJECTS =

Pointer-2.exe: CMakeFiles/Pointer-2.dir/c-test/Pointer-2.c.obj
Pointer-2.exe: CMakeFiles/Pointer-2.dir/build.make
Pointer-2.exe: CMakeFiles/Pointer-2.dir/linklibs.rsp
Pointer-2.exe: CMakeFiles/Pointer-2.dir/objects1.rsp
Pointer-2.exe: CMakeFiles/Pointer-2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\java\c\cpp-examples\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Pointer-2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Pointer-2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pointer-2.dir/build: Pointer-2.exe

.PHONY : CMakeFiles/Pointer-2.dir/build

CMakeFiles/Pointer-2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Pointer-2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Pointer-2.dir/clean

CMakeFiles/Pointer-2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\java\c\cpp-examples C:\java\c\cpp-examples C:\java\c\cpp-examples\cmake-build-debug C:\java\c\cpp-examples\cmake-build-debug C:\java\c\cpp-examples\cmake-build-debug\CMakeFiles\Pointer-2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pointer-2.dir/depend

