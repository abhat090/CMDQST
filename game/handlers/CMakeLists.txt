CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

add_executable(cmd_alpha.exe
    src/main.cpp
)

TARGET_LINK_LIBRARIES(cmd_alpha.exe objectLib)