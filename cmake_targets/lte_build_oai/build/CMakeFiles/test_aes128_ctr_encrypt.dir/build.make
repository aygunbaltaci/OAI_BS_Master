# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/oainuc2/openairinterface5g/cmake_targets/lte_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oainuc2/openairinterface5g/cmake_targets/lte_build_oai/build

# Include any dependencies generated for this target.
include CMakeFiles/test_aes128_ctr_encrypt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_aes128_ctr_encrypt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_aes128_ctr_encrypt.dir/flags.make

CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o: CMakeFiles/test_aes128_ctr_encrypt.dir/flags.make
CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o: /home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oainuc2/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o   -c /home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c

CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c > CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.i

CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c -o CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.s

CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o.requires:

.PHONY : CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o.requires

CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o.provides: CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o.requires
	$(MAKE) -f CMakeFiles/test_aes128_ctr_encrypt.dir/build.make CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o.provides.build
.PHONY : CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o.provides

CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o.provides.build: CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o


# Object files for target test_aes128_ctr_encrypt
test_aes128_ctr_encrypt_OBJECTS = \
"CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o"

# External object files for target test_aes128_ctr_encrypt
test_aes128_ctr_encrypt_EXTERNAL_OBJECTS =

test_aes128_ctr_encrypt: CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o
test_aes128_ctr_encrypt: CMakeFiles/test_aes128_ctr_encrypt.dir/build.make
test_aes128_ctr_encrypt: libSECU_CN.a
test_aes128_ctr_encrypt: libUTIL.a
test_aes128_ctr_encrypt: libLFDS.a
test_aes128_ctr_encrypt: CMakeFiles/test_aes128_ctr_encrypt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/oainuc2/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_aes128_ctr_encrypt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_aes128_ctr_encrypt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_aes128_ctr_encrypt.dir/build: test_aes128_ctr_encrypt

.PHONY : CMakeFiles/test_aes128_ctr_encrypt.dir/build

CMakeFiles/test_aes128_ctr_encrypt.dir/requires: CMakeFiles/test_aes128_ctr_encrypt.dir/home/oainuc2/openairinterface5g/openair3/TEST/test_aes128_ctr_encrypt.c.o.requires

.PHONY : CMakeFiles/test_aes128_ctr_encrypt.dir/requires

CMakeFiles/test_aes128_ctr_encrypt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_aes128_ctr_encrypt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_aes128_ctr_encrypt.dir/clean

CMakeFiles/test_aes128_ctr_encrypt.dir/depend:
	cd /home/oainuc2/openairinterface5g/cmake_targets/lte_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oainuc2/openairinterface5g/cmake_targets/lte_build_oai /home/oainuc2/openairinterface5g/cmake_targets/lte_build_oai /home/oainuc2/openairinterface5g/cmake_targets/lte_build_oai/build /home/oainuc2/openairinterface5g/cmake_targets/lte_build_oai/build /home/oainuc2/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/test_aes128_ctr_encrypt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_aes128_ctr_encrypt.dir/depend

