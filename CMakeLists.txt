cmake_minimum_required(VERSION 3.10)
PROJECT(Singleton VERSION 1.0)


FILE(
    GLOB Singleton_files
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/*.h
    
)

add_executable(SingletonExamples ${Singleton_files})