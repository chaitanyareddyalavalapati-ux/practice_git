cmake_minimum_required(VERSION 3.10)
project(cluade_ai_calculator VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(calculator_lib STATIC calculator.cpp)
target_include_directories(calculator_lib PUBLIC ${CMAKE_SOURCE_DIR})

add_executable(calculator main.cpp)
target_link_libraries(calculator PRIVATE calculator_lib)

enable_testing()
add_executable(calculator_tests test/test_calculator.cpp)
target_link_libraries(calculator_tests PRIVATE calculator_lib)
add_test(NAME calculator_unit_tests COMMAND calculator_tests)
