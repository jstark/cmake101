set (source_code main.cpp)

add_executable (test3 ${source_code})

target_link_libraries (test3 eqsolver)
