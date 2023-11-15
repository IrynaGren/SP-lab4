cmake_minimum_required(VERSION 3.10.2)
project(MyProject)
add_library(MyProdlib STATIC main.c algo.c algo.h)
add_executable(MyProject 
./main.c
./algo.c
)
