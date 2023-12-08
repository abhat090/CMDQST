# ADD OBJECT SOURCE FILES HERE
CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/src")

#ADD_SUBDIRECTORY(googletest)

add_library(objectLib
    src/Attack.cpp
    src/Card.cpp
    src/character.cpp
    src/Defense.cpp
    src/Enemy.cpp
    src/Heal.cpp
    src/player.cpp
)

#ADD_EXECUTABLE(test 
 #   TestCharacter.cpp
#)
#TARGET_LINK_LIBRARIES(test gtest)
#TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)