include_directories (.)

SET(source_code eqsolver.h quad.cpp)

add_library (eqsolver SHARED ${source_code})

install (TARGETS eqsolver DESTINATION "${PROJECT_BINARY_DIR}/lib")
install (FILES eqsolver.h DESTINATION "${PROJECT_BINARY_DIR}/include")
