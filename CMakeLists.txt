cmake_minimum_required(VERSION 3.5)
project(drogon_website)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

find_package(Drogon REQUIRED)
include(DrogonUtilities)

add_executable(drogon_website backend/main.cpp
                              backend/MainPages.cpp
                              backend/Api.cpp)
drogon_create_views(drogon_website backend/templates ${CMAKE_CURRENT_BINARY_DIR}/backend)
file(COPY drogon_config.json DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries(drogon_website ${DROGON_LIBRARIES})

install(TARGETS drogon_website)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/content DESTINATION share/drogon_website)
install(FILES ${CMAKE_SOURCE_DIR}/drogon_config.json DESTINATION share/drogon_website/)