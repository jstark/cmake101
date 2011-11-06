set (source_code main.c)

add_executable (test2 ${source_code})

target_link_libraries (test2 eqsolver)
