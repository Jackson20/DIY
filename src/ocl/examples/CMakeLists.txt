add_executable(print_info print_info.cpp)
add_executable(math_square_1d_static_buffer math_square_1d_static_buffer.cpp)
add_executable(math_square_2d_static_buffer math_square_2d_static_buffer.cpp)
add_executable(math_square_2d_dynamic_buffer math_square_2d_dynamic_buffer.cpp)

target_link_libraries(print_info ocl)
target_link_libraries(math_square_1d_static_buffer ocl)
target_link_libraries(math_square_2d_static_buffer ocl)
target_link_libraries(math_square_2d_dynamic_buffer ocl)