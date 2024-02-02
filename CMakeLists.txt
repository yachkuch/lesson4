cmake_minimum_required(VERSION 3.0.0)
project(Lesson4 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Lesson4 main func.h)
set_target_properties(Lesson4 PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
