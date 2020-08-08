cmake_minimum_required (VERSION 3.5)
#set(VCPKG_ROOT "C:\\Users\\itgeek\\software\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake" CACHE PATH "")
#set(CMAKE_TOOLCHAIN_FILE ${VCPKG_ROOT})
#set(JSONCPP_INCLUDE_DIRS, "C:\\Users\\itgeek\\software\\vcpkg\\packages\\jsoncpp_x64-windows\\include")
project(drogon_backend CXX)

include(CheckIncludeFileCXX)

check_include_file_cxx(any HAS_ANY)
check_include_file_cxx(string_view HAS_STRING_VIEW)
if(HAS_ANY AND HAS_STRING_VIEW)
    set(CMAKE_CXX_STANDARD 17)
else()
    set(CMAKE_CXX_STANDARD 14)
endif()

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${PROJECT_NAME} main.cc controllers/consts.h)

##########
# If you include the drogon source code locally in your project, use this method to add drogon
# add_subdirectory(drogon)
# target_link_libraries(${PROJECT_NAME} PRIVATE drogon)
##########
# -DCMAKE_TOOLCHAIN_FILE=/scripts/buildsystems/vcpkg.cmake”
# set(DCMAKE_TOOLCHAIN_FILE, "C:\\Users\\itgeek\\software\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake")
# set(VCPKG_ROOT "C:\\Users\\itgeek\\software\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake" CACHE PATH "")
# set(CMAKE_TOOLCHAIN_FILE ${VCPKG_ROOT})
# set(CMAKE_PREFIX_PATH, "C:\\Users\\itgeek\\software\\vcpkg\\packages\\jsoncpp_x64-windows\\include")
find_package(Drogon CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE Drogon::Drogon)

if(CMAKE_CXX_STANDARD LESS 17)
#With C++14, use boost to support any and string_view
    message(STATUS "use c++14")
    find_package(Boost 1.61.0 REQUIRED)
    target_include_directories(${PROJECT_NAME} PRIVATE ${Boost_INCLUDE_DIRS})
else()
    message(STATUS "use c++17")
endif()

aux_source_directory(controllers CTL_SRC)
aux_source_directory(filters FILTER_SRC)
aux_source_directory(plugins PLUGIN_SRC)
aux_source_directory(models MODEL_SRC)

file(GLOB_RECURSE SCP_LIST ${CMAKE_CURRENT_SOURCE_DIR}/views/*.csp)
foreach(cspFile ${SCP_LIST})
    message(STATUS "cspFile:" ${cspFile})
    get_filename_component(classname ${cspFile} NAME_WE)
    message(STATUS "view classname:" ${classname})
    ADD_CUSTOM_COMMAND(OUTPUT ${classname}.h ${classname}.cc
            COMMAND drogon_ctl
            ARGS create view ${cspFile}
            DEPENDS ${cspFile}
            VERBATIM )
    set(VIEWSRC ${VIEWSRC} ${classname}.cc)
endforeach()

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/models)
target_sources(${PROJECT_NAME} PRIVATE ${SRC_DIR} ${CTL_SRC} ${FILTER_SRC} ${VIEWSRC} ${PLUGIN_SRC} ${MODEL_SRC})
################################
# uncomment the following line for dynamically loading views 
#set_property(TARGET ${PROJECT_NAME} PROPERTY ENABLE_EXPORTS ON)
