cmake_minimum_required(VERSION 3.14) # Set the minimum version of CMake

project(MetaMorph VERSION 0.1.0 DESCRIPTION "A simple C++ Decorator Library" LANGUAGES CXX)

# Make sure the compiler uses C++17 or later
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the library. Since it's header-only, we don't specify any sources.
add_library(${PROJECT_NAME} INTERFACE)

# Specify the include directories
target_include_directories(${PROJECT_NAME} INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
                                                      $<INSTALL_INTERFACE:include>)

# Optional: If you want to install your library (useful for packaging)
include(GNUInstallDirs)
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
