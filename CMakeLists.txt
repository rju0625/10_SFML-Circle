cmake_minimum_required(VERSION 3.10)

project(10_SFML_Circle)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 3.0 REQUIRED COMPONENTS Window Graphics)

add_executable(10_SFML_Circle src/main.cpp)

# Use SFML::Window and SFML::Graphics
target_link_libraries(10_SFML_Circle
    PRIVATE
        SFML::Window
        SFML::Graphics
)