# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lq/CMakeProj/pro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lq/CMakeProj/pro/build

# Include any dependencies generated for this target.
include src/run/CMakeFiles/run.dir/depend.make

# Include the progress variables for this target.
include src/run/CMakeFiles/run.dir/progress.make

# Include the compile flags for this target's objects.
include src/run/CMakeFiles/run.dir/flags.make

src/run/CMakeFiles/run.dir/run.c.o: src/run/CMakeFiles/run.dir/flags.make
src/run/CMakeFiles/run.dir/run.c.o: ../src/run/run.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lq/CMakeProj/pro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/run/CMakeFiles/run.dir/run.c.o"
	cd /home/lq/CMakeProj/pro/build/src/run && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/run.dir/run.c.o   -c /home/lq/CMakeProj/pro/src/run/run.c

src/run/CMakeFiles/run.dir/run.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/run.dir/run.c.i"
	cd /home/lq/CMakeProj/pro/build/src/run && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lq/CMakeProj/pro/src/run/run.c > CMakeFiles/run.dir/run.c.i

src/run/CMakeFiles/run.dir/run.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/run.dir/run.c.s"
	cd /home/lq/CMakeProj/pro/build/src/run && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lq/CMakeProj/pro/src/run/run.c -o CMakeFiles/run.dir/run.c.s

src/run/CMakeFiles/run.dir/run.c.o.requires:

.PHONY : src/run/CMakeFiles/run.dir/run.c.o.requires

src/run/CMakeFiles/run.dir/run.c.o.provides: src/run/CMakeFiles/run.dir/run.c.o.requires
	$(MAKE) -f src/run/CMakeFiles/run.dir/build.make src/run/CMakeFiles/run.dir/run.c.o.provides.build
.PHONY : src/run/CMakeFiles/run.dir/run.c.o.provides

src/run/CMakeFiles/run.dir/run.c.o.provides.build: src/run/CMakeFiles/run.dir/run.c.o


# Object files for target run
run_OBJECTS = \
"CMakeFiles/run.dir/run.c.o"

# External object files for target run
run_EXTERNAL_OBJECTS =

../obj/librun.so: src/run/CMakeFiles/run.dir/run.c.o
../obj/librun.so: src/run/CMakeFiles/run.dir/build.make
../obj/librun.so: src/run/CMakeFiles/run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lq/CMakeProj/pro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library ../../../obj/librun.so"
	cd /home/lq/CMakeProj/pro/build/src/run && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/run/CMakeFiles/run.dir/build: ../obj/librun.so

.PHONY : src/run/CMakeFiles/run.dir/build

src/run/CMakeFiles/run.dir/requires: src/run/CMakeFiles/run.dir/run.c.o.requires

.PHONY : src/run/CMakeFiles/run.dir/requires

src/run/CMakeFiles/run.dir/clean:
	cd /home/lq/CMakeProj/pro/build/src/run && $(CMAKE_COMMAND) -P CMakeFiles/run.dir/cmake_clean.cmake
.PHONY : src/run/CMakeFiles/run.dir/clean

src/run/CMakeFiles/run.dir/depend:
	cd /home/lq/CMakeProj/pro/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lq/CMakeProj/pro /home/lq/CMakeProj/pro/src/run /home/lq/CMakeProj/pro/build /home/lq/CMakeProj/pro/build/src/run /home/lq/CMakeProj/pro/build/src/run/CMakeFiles/run.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/run/CMakeFiles/run.dir/depend

