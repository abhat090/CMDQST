CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

configure_file(display_text/MENU_MAIN.txt
    COPYONLY)

add_executable(cmd_alpha.exe
    src/main.cpp
    src/output.cpp
    src/input.cpp
)

TARGET_LINK_LIBRARIES(cmd_alpha.exe objectLib)