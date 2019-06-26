add_executable(test_core 00006.cpp)
target_link_libraries(test_core gtest_main)

include(GoogleTest)
gtest_discover_tests(test_core)
