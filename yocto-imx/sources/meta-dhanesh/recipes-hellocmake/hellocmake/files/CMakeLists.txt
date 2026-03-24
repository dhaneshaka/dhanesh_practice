#cmake_minimum_required(VERSION 3.10)
#project(hellocmake C)
#set(CMAKE_C)STANDARD 11)
#add_executable(hellocmake hellocmake.c)

cmake_minimum_required(VERSION 3.5)

project(hellocmake C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(hellocmake hellocmake.c)

