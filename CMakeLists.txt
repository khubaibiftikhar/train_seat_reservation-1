cmake_minimum_required(VERSION 3.22.1)

project(SRP)

add_executable(${PROJECT_NAME} main.cpp)


add_subdirectory(SEAT)

target_link_directories(${PROJECT_NAME} PRIVATE SEAT)

target_include_directories(${PROJECT_NAME} PUBLIC SEAT)

target_link_libraries(${PROJECT_NAME} seats)