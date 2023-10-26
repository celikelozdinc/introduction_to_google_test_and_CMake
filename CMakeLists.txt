# https://matgomes.com/integrate-google-test-into-cmake/
# https://www.youtube.com/watch?v=Lp1ifh9TuFI
cmake_minimum_required(VERSION 3.21)
project(scorp_interview
                    DESCRIPTION "Backend Interview"
                    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)
