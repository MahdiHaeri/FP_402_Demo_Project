cmake_minimum_required(VERSION 3.25)
project(FP_402_Demo_Project C)

set(CMAKE_C_STANDARD 17)

add_executable(FP_402_Demo_Project src/main.c src/utils/gotoxy.h src/utils/printOnXY.h)

target_link_libraries(FP_402_Demo_Project ncurses)
