CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

file(GLOB execFiles
    "*/*.cpp"
)

add_executable(cmd_alpha.exe
    ${execFiles}
)

TARGET_LINK_LIBRARIES(cmd_alpha.exe objectLib)
SET_PROPERTY(TARGET cmd_alpha.exe PROPERTY CXX_STANDARD 23)
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g")