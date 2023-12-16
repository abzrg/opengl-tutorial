set(TARGETS main)

foreach(TARGET ${TARGETS})
    add_executable(${TARGET} ${TARGET}.cpp)
    target_link_libraries(${TARGET}
        PUBLIC glfw
        PUBLIC glad
    )
endforeach()
