include(FetchContent)

#declare a dependency on GoogleTest
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest) #cmake module
add_library(GTest::GTest INTERFACE IMPORTED)

target_link_libraries(GTest::GTest INTERFACE gtest_main)
add_executable(sort_test sort_test.cpp)

target_link_libraries(sort_test
        PRIVATE
        GTest::GTest
        sort
)

add_test(sorted sort_test)