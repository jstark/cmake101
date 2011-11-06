set (source_code main.cpp)

add_executable (test1 ${source_code})

target_link_libraries (test1 eqsolver)
