# add_executable(main main.cpp)
# target_link_libraries(main
#     PRIVATE glfw
#     PRIVATE glad
# )

foreach(TARGET
        main
        triangle
    )

    add_executable(${TARGET} ${TARGET}.cpp)
    target_link_libraries(${TARGET}
        PUBLIC glfw
        PUBLIC glad
    )

endforeach()
