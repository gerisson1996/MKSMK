cmake_minimum_required(VERSION 3.20)

# ============================================================================
# Mortal Kombat: Shaolin Monks (Xbox, NTSC-U) - Static Recompilation
#
# Hosts: Windows (MSVC, D3D11), Linux (GCC, SDL2 + OpenGL) and Nintendo
# Switch homebrew (devkitA64 + libnx, built with switch/build.sh).
# ============================================================================

project(mksm_recomp LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_compile_definitions(
    WIN32_LEAN_AND_MEAN
    NOMINMAX
)

set(XBOXRECOMP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/xboxrecomp" CACHE PATH
    "Path to the xboxrecomp toolkit root directory")

# The lifted code is generated from the retail XBE. It is never committed;
# point this at wherever tools.recomp --gen-dir wrote it.
set(MKSM_GEN_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp/gen" CACHE PATH
    "Directory holding the tools.recomp output (recomp_*.c, recomp_funcs.h)")

if(NOT EXISTS "${MKSM_GEN_DIR}/recomp_funcs.h")
    message(FATAL_ERROR "No generated code in ${MKSM_GEN_DIR}. Run tools.recomp "
                        "with --gen-dir, or pass -DMKSM_GEN_DIR=<dir>.")
endif()

add_subdirectory(${XBOXRECOMP_DIR} ${CMAKE_BINARY_DIR}/xboxrecomp)

file(GLOB RECOMP_GEN_SOURCES CONFIGURE_DEPENDS "${MKSM_GEN_DIR}/*.c")

set(GAME_SOURCES
    src/main.c
    src/recomp_manual.c
    src/switch_nx.c
)

if(WIN32)
    add_executable(${PROJECT_NAME} WIN32 ${GAME_SOURCES} ${RECOMP_GEN_SOURCES})
else()
    add_executable(${PROJECT_NAME} ${GAME_SOURCES} ${RECOMP_GEN_SOURCES})
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE xboxrecomp)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${MKSM_GEN_DIR}
    ${XBOXRECOMP_DIR}/include
    ${XBOXRECOMP_DIR}/include/xbox
    ${XBOXRECOMP_DIR}/src
    ${XBOXRECOMP_DIR}/src/kernel
    ${XBOXRECOMP_DIR}/src/d3d
    ${XBOXRECOMP_DIR}/src/audio
    ${XBOXRECOMP_DIR}/src/input
    ${XBOXRECOMP_DIR}/src/apu
    ${XBOXRECOMP_DIR}/src/nv2a
    ${XBOXRECOMP_DIR}/src/platform
)

# Generated code needs permissive warnings
if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W3 /wd4244 /wd4267 /wd4018)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE
        -O1 -fno-var-tracking -fno-var-tracking-assignments
        -Wall -Wno-unused-variable -Wno-unused-but-set-variable
        -Wno-sign-compare -Wno-parentheses)
endif()
