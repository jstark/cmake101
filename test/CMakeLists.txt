include_directories(../src)

add_subdirectory (test_link_cpp) 
add_subdirectory (test_link_c)
add_subdirectory (unit_test_1)

add_test (test1 ${CMAKE_BINARY_DIR}/test/test_link_cpp/test1)
add_test (test2 ${CMAKE_BINARY_DIR}/test/test_link_c/test2)
add_test (test3 ${CMAKE_BINARY_DIR}/test/unit_test_1/test3)
set_tests_properties (test3 PROPERTIES PASS_REGULAR_EXPRESSION 
"ret 1, roots -1.000000 1.414200 -1.000000 -1.414200
ret 0, roots 3.000000 -1.000000 0.000000 0.000000
ret 0, roots 4.791300 0.208710 0.000000 0.000000
ret 0, roots 1.000000 1.000000 0.000000 0.000000")
