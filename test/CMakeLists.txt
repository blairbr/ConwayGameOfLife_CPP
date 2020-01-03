include_directories(../src)
add_executable(${PROJECT_NAME} testdefault.cpp ../src/life.cpp)
target_link_libraries(${PROJECT_NAME} gtest_main)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
