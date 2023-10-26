include(FetchContent)

#declare a dependency on GoogleTest
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
) #downloads CMake project, makes it part of your build

#FetchContent_Declare(Faker
#        GIT_REPOSITORY "https://github.com/cieslarmichal/faker-cxx"
#        GIT_TAG "bf3dca310a5c8b9db829a9e2937c4e88ff3a4aa8"
#)

#FetchContent_MakeAvailable(googletest Faker) #cmake module
FetchContent_MakeAvailable(googletest) #cmake module
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

set(This sort_test)

set(Sources
        sort_test.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This}
        PRIVATE
        GTest::GTest
        sort
        #faker-cxx
)

add_test(sorted ${This})