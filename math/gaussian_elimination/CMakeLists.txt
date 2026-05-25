add_executable(gaussian_elimination main.cpp matrix.cpp)
target_include_directories(gaussian_elimination PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
