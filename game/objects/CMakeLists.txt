# ADD OBJECT SOURCE FILES HERE
CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/src")

ADD_SUBDIRECTORY(googletest)

add_library(objectLib
    src/character.cpp
    src/player.cpp
    src/TestCharacter.cpp
)

TARGET_LINK_LIBRARIES(runAllTests gtest)