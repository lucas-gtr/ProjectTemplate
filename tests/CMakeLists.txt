add_executable(UnitTests main_tests.cpp)

target_sources(UnitTests PRIVATE     
)

set(TEST_COVERAGE_FLAGS --coverage -O0 -g)

target_compile_options(UnitTests PRIVATE ${TEST_COVERAGE_FLAGS})
target_link_options(UnitTests PRIVATE ${TEST_COVERAGE_FLAGS})

target_link_libraries(UnitTests PRIVATE 
    gtest
    gmock
)

target_include_directories(UnitTests PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/external/googletest/include
    ${CMAKE_SOURCE_DIR}/external/googletest/googlemock/include
)

add_test(NAME UnitTests COMMAND UnitTests)
