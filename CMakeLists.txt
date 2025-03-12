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
    list(APPEND LINK_LIB_LIST WS2_32 Iphlpapi shlwapi)
else()
    list(APPEND LINK_LIB_LIST pthread)
endif()

#±‡“Î∂ØÃ¨ø‚
#Compile dynamic library
#if(NOT IOS AND NOT ANDROID AND NOT WIN32)
#    add_library(${PROJECT_NAME}_shared SHARED ${ParseMp4_src_list})
#    target_include_directories(${PROJECT_NAME}_shared PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
#    target_link_libraries(${PROJECT_NAME}_shared ${LINK_LIB_LIST})
#    set_target_properties(${PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "${PROJECT_NAME}")
#    set_target_properties(${PROJECT_NAME}_shared PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
#    install(TARGETS ${PROJECT_NAME}_shared  ARCHIVE DESTINATION ${INSTALL_PATH_LIB} LIBRARY DESTINATION ${INSTALL_PATH_LIB})

#    add_library(NWTool_shared SHARED ${NWTool_src_list})
#    target_include_directories(NWTool_shared PUBLIC ${NWTool_src_list})
#    target_link_libraries(NWTool_shared ${LINK_LIB_LIST})
#    set_target_properties(NWTool_shared PROPERTIES OUTPUT_NAME "NWTool")
#    set_target_properties(NWTool_shared PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
#    install(TARGETS NWTool_shared  ARCHIVE DESTINATION ${INSTALL_PATH_LIB} LIBRARY DESTINATION ${INSTALL_PATH_LIB})
#endif()

add_library(NWTool STATIC ${NWTool_src_list})
add_library(${PROJECT_NAME} STATIC ${ParseMp4_src_list})

list(APPEND LINK_LIB_LIST ${PROJECT_NAME})

add_subdirectory(tests)