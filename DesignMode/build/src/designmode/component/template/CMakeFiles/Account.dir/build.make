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
CMAKE_SOURCE_DIR = /home/liqi/C++/DesignMode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liqi/C++/DesignMode/build

# Include any dependencies generated for this target.
include src/designmode/component/template/CMakeFiles/Account.dir/depend.make

# Include the progress variables for this target.
include src/designmode/component/template/CMakeFiles/Account.dir/progress.make

# Include the compile flags for this target's objects.
include src/designmode/component/template/CMakeFiles/Account.dir/flags.make

src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o: src/designmode/component/template/CMakeFiles/Account.dir/flags.make
src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o: ../src/designmode/component/template/Account.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liqi/C++/DesignMode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o"
	cd /home/liqi/C++/DesignMode/build/src/designmode/component/template && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Account.dir/Account.cpp.o -c /home/liqi/C++/DesignMode/src/designmode/component/template/Account.cpp

src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Account.dir/Account.cpp.i"
	cd /home/liqi/C++/DesignMode/build/src/designmode/component/template && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liqi/C++/DesignMode/src/designmode/component/template/Account.cpp > CMakeFiles/Account.dir/Account.cpp.i

src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Account.dir/Account.cpp.s"
	cd /home/liqi/C++/DesignMode/build/src/designmode/component/template && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liqi/C++/DesignMode/src/designmode/component/template/Account.cpp -o CMakeFiles/Account.dir/Account.cpp.s

src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o.requires:

.PHONY : src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o.requires

src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o.provides: src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o.requires
	$(MAKE) -f src/designmode/component/template/CMakeFiles/Account.dir/build.make src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o.provides.build
.PHONY : src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o.provides

src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o.provides.build: src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o


# Object files for target Account
Account_OBJECTS = \
"CMakeFiles/Account.dir/Account.cpp.o"

# External object files for target Account
Account_EXTERNAL_OBJECTS =

../obj/libAccount.so: src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o
../obj/libAccount.so: src/designmode/component/template/CMakeFiles/Account.dir/build.make
../obj/libAccount.so: src/designmode/component/template/CMakeFiles/Account.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/liqi/C++/DesignMode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../../../../obj/libAccount.so"
	cd /home/liqi/C++/DesignMode/build/src/designmode/component/template && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Account.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/designmode/component/template/CMakeFiles/Account.dir/build: ../obj/libAccount.so

.PHONY : src/designmode/component/template/CMakeFiles/Account.dir/build

src/designmode/component/template/CMakeFiles/Account.dir/requires: src/designmode/component/template/CMakeFiles/Account.dir/Account.cpp.o.requires

.PHONY : src/designmode/component/template/CMakeFiles/Account.dir/requires

src/designmode/component/template/CMakeFiles/Account.dir/clean:
	cd /home/liqi/C++/DesignMode/build/src/designmode/component/template && $(CMAKE_COMMAND) -P CMakeFiles/Account.dir/cmake_clean.cmake
.PHONY : src/designmode/component/template/CMakeFiles/Account.dir/clean

src/designmode/component/template/CMakeFiles/Account.dir/depend:
	cd /home/liqi/C++/DesignMode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liqi/C++/DesignMode /home/liqi/C++/DesignMode/src/designmode/component/template /home/liqi/C++/DesignMode/build /home/liqi/C++/DesignMode/build/src/designmode/component/template /home/liqi/C++/DesignMode/build/src/designmode/component/template/CMakeFiles/Account.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/designmode/component/template/CMakeFiles/Account.dir/depend

