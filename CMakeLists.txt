cmake_minimum_required(VERSION 3.12)
project(Lame_Engine)

# Set C++ standard version
set(CMAKE_CXX_STANDARD 11)

# Find SDL2 package
#find_package(SDL2 REQUIRED)

set(SDL2_INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/libs/sdl2)
# Add include directories for SDL2
include_directories(${SDL2_INCLUDE_DIRS})

#Set the library directory for GLM
set(GLM_DIR ${CMAKE_SOURCE_DIR}/libs/glm)
include_directories(${GLM_DIR})

file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add include directories
include_directories(
        src/components
        src/entities
        src/systems
        src
)

# Add executable
add_executable(Lame_Engine ${SOURCES})

# Link SDL2 Libraries
target_link_libraries(Lame_Engine ${SDL2_LIBRARIES})