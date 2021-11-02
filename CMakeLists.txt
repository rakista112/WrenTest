cmake_minimum_required(VERSION 3.0.0)
project(Wren VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Wren main.cpp)
set(CMAKE_PREFIX_PATH "J:/code/wren-0.4.0/build")
find_library(libwren NAMES wren PATHS "J:/code/wren-0.4.0/build" NO_DEFAULT_PATH)
target_include_directories(Wren PUBLIC "J:/code/wren-0.4.0/src/include" )
target_link_libraries(Wren PUBLIC ${libwren})
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
