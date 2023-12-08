CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

file(GLOB execFiles
    "*/*.cpp"
)

add_executable(cmd_alpha.exe
    ${execFiles}
)

TARGET_LINK_LIBRARIES(cmd_alpha.exe objectLib)