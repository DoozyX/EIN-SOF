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
CMAKE_COMMAND = /cygdrive/c/Users/slobo/.CLion2017.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/slobo/.CLion2017.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/02.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/02.dir/flags.make

CMakeFiles/02.dir/main.c.o: CMakeFiles/02.dir/flags.make
CMakeFiles/02.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/02.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/02.dir/main.c.o   -c /cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02/main.c

CMakeFiles/02.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/02.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02/main.c > CMakeFiles/02.dir/main.c.i

CMakeFiles/02.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/02.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02/main.c -o CMakeFiles/02.dir/main.c.s

CMakeFiles/02.dir/main.c.o.requires:

.PHONY : CMakeFiles/02.dir/main.c.o.requires

CMakeFiles/02.dir/main.c.o.provides: CMakeFiles/02.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/02.dir/build.make CMakeFiles/02.dir/main.c.o.provides.build
.PHONY : CMakeFiles/02.dir/main.c.o.provides

CMakeFiles/02.dir/main.c.o.provides.build: CMakeFiles/02.dir/main.c.o


# Object files for target 02
02_OBJECTS = \
"CMakeFiles/02.dir/main.c.o"

# External object files for target 02
02_EXTERNAL_OBJECTS =

02.exe: CMakeFiles/02.dir/main.c.o
02.exe: CMakeFiles/02.dir/build.make
02.exe: CMakeFiles/02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 02.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/02.dir/build: 02.exe

.PHONY : CMakeFiles/02.dir/build

CMakeFiles/02.dir/requires: CMakeFiles/02.dir/main.c.o.requires

.PHONY : CMakeFiles/02.dir/requires

CMakeFiles/02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/02.dir/clean

CMakeFiles/02.dir/depend:
	cd /cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02 /cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02 /cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02/cmake-build-debug /cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02/cmake-build-debug /cygdrive/c/Users/slobo/CLionProjects/EIN-SOF/C-Problems/Lecture-10/02/cmake-build-debug/CMakeFiles/02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/02.dir/depend

