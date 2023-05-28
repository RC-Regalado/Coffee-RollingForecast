include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(rf_test 
  main.cpp 
  objects_test.cpp
  utils_test.cpp
)

target_link_libraries(rf_test
 PRIVATE
  GTest::GTest
  rolling_forecast)

add_test(rf_gtests rf_test)

set_tests_properties(
  rf_gtests
  PROPERTIES
  ENVIRONMENT "GDB=/bin/gdb"
)
