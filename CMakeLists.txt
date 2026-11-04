cmake_minimum_required(VERSION 3.16)
project(documentation CXX)
add_library(documentation src/flows.cpp)
target_include_directories(documentation PUBLIC src)
