cmake_minimum_required(VERSION 3.19)
project(cpp_examples)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_examples main.cpp)
add_executable(SingleLinkListNoHeader LinkList/SingleLinkListNoHeadNode.cpp)
add_executable(SingleLinkListWithHeadNode LinkList/SingleLinkListWithHeadNode.cpp)
add_executable(Pointer c-test/Pointer-1.c)
add_executable(Pointer-2 c-test/Pointer-2.c)
add_executable(Pointer-3-NULL c-test/Pointer-3-NULL.c)
add_executable(Pointer-4-array c-test/Pointer-4-array.c)