aux_source_directory(. SRCLIST)



foreach(TEST_SRC ${SRCLIST})
	STRING(REGEX REPLACE "^\\./|\\.c[a-zA-Z0-9_]*$" "" TEST_EXE_NAME ${TEST_SRC})
	add_executable(${TEST_EXE_NAME} ${TEST_SRC})

	if(ANDROID OR IOS OR WIN32)
        target_link_libraries(${TEST_EXE_NAME}  ${LINK_LIB_LIST})
    else()
        target_link_libraries(${TEST_EXE_NAME} ${LINK_LIB_LIST} pthread)
    endif()
endforeach(TEST_SRC ${SRCLIST})



set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)