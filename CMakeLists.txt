CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")

project(command_quest-CS100FINAL)

include_directories(
    ${CMAKE_SOURCE_DIR}/game/handlers/headers
    ${CMAKE_SOURCE_DIR}/game/objects/headers
)

add_subdirectory(game/handlers)
add_subdirectory(game/objects)