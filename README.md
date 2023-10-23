# PURPOSE 

This project:
- written in C++, especially with Modern C++ techniques.
- uses CMake build generator and Make build system in order to generate executables.
- generates "sort" static library, verifies its functionality by some unit tests with the help of Google Gtest library.

# BUILD and EXECUTION

- In order to run unit tests: 

> cd build
> 
> cmake .. -DCMAKE_BUILD_TYPE=Debug
> 
> make sort_test
> 
> ./tests/sort_test
