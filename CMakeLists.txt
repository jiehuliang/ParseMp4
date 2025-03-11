cmake_minimum_required (VERSION 3.8)

project ("ParseMp4")

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")

set(NWTool_Root ${CMAKE_CURRENT_SOURCE_DIR}/3rdpart/NWTool/src)
set(ParseMp4_Root ${CMAKE_CURRENT_SOURCE_DIR}/src)

include_directories(${NWTool_Root})
include_directories(${ParseMp4_Root})

set(LINK_LIB_LIST NWTool)

file(GLOB NWTool_src_list ${NWTool_Root}/*/*.cpp ${NWTool_Root}/*/*.h ${NWTool_Root}/*/*.c)
file(GLOB ParseMp4_src_list ${ParseMp4_Root}/*/*.cpp ${ParseMp4_Root}/*/*.h ${ParseMp4_Root}/*/*.c)

if(WIN32)
    set(LINK_LIB_LIST WS2_32 Iphlpapi shlwapi)
else()
    set(LINK_LIB_LIST)
endif()

#编译动态库
#Compile dynamic library
if(NOT IOS AND NOT ANDROID AND NOT WIN32)
    add_library(${PROJECT_NAME}_shared SHARED ${ParseMp4_src_list})
    target_include_directories(${PROJECT_NAME}_shared PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
    target_link_libraries(${PROJECT_NAME}_shared ${LINK_LIB_LIST})
    set_target_properties(${PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "${PROJECT_NAME}")
    set_target_properties(${PROJECT_NAME}_shared PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
    install(TARGETS ${PROJECT_NAME}_shared  ARCHIVE DESTINATION ${INSTALL_PATH_LIB} LIBRARY DESTINATION ${INSTALL_PATH_LIB})
endif()

#编译静态库
#Compile static library
add_library(${PROJECT_NAME}_static STATIC ${ParseMp4_src_list})
#引用头文件路径
#Reference header file path
target_include_directories(${PROJECT_NAME}_static PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
set_target_properties(${PROJECT_NAME}_static PROPERTIES OUTPUT_NAME "${PROJECT_NAME}")
set_target_properties(${PROJECT_NAME}_static PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
#安装静态库至系统目录
#Install static library to system directory
install(TARGETS ${PROJECT_NAME}_static ARCHIVE DESTINATION ${INSTALL_PATH_LIB})

add_library(NWTool STATIC ${NWTool_src_list})
#引用头文件路径
#Reference header file path
target_include_directories(NWTool PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
set_target_properties(NWTool PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
#安装静态库至系统目录
#Install static library to system directory
install(TARGETS NWTool ARCHIVE DESTINATION ${INSTALL_PATH_LIB})

add_subdirectory(tests)