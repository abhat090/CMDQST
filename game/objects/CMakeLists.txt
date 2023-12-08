# ADD OBJECT SOURCE FILES HERE

file(GLOB objFiles
    "*/*.cpp"
)

add_library(objectLib
    ${objFiles}
)