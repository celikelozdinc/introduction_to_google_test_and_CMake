cmake_minimum_required(VERSION 3.21)
project(scorp_interview
                    DESCRIPTION "Backend Interview"
                    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
