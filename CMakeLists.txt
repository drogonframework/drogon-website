cmake_minimum_required(VERSION 3.5)
project(drogon_website)

set(CMAKE_CXX_STANDARD  20)

find_package(Drogon REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)

include(DrogonUtilities)

add_executable(drogon_website backend/main.cpp
                              backend/MainPages.cpp
                              backend/Api.cpp)
drogon_create_views(drogon_website backend/templates ${CMAKE_CURRENT_BINARY_DIR}/backend)
file(COPY drogon_config.json DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE Drogon::Drogon)
target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)

install(TARGETS drogon_website RUNTIME DESTINATION share/drogon_website/bin)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/content DESTINATION share/drogon_website)
install(FILES ${CMAKE_SOURCE_DIR}/drogon_config.json DESTINATION share/drogon_website/bin)
