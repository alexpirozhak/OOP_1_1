# 'Google_test' is the subproject name
project(Google_tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
add_executable(Google_Tests_run test.cpp ../IntPower.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)
target_link_libraries(OOP_lab_1_1 gtest gtest_main)