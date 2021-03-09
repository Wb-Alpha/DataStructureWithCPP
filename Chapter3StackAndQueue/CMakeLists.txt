cmake_minimum_required(VERSION 3.17)
project(Chapter3Stack)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter3Stack main.cpp SqStack.h ShareStack.h LinkStack.h SeqQueue.h LinkQueue.h CircleQueue.h)