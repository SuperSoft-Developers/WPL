cmake_minimum_required(VERSION 3.15)

project(WPL VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

set(WPL_SOURCES
    src/main.cpp
    src/graphics.cpp
    src/audio.cpp
    src/input.cpp
)

# Ícone do Windows
if(WIN32)
    configure_file(
        ${CMAKE_SOURCE_DIR}/icons.ico
        ${CMAKE_BINARY_DIR}/icons.ico
        COPYONLY
    )

    file(WRITE ${CMAKE_BINARY_DIR}/wpl.rc
"IDI_ICON1 ICON \"icons.ico\"")
endif()

add_executable(WPL ${WPL_SOURCES})

if(WIN32)
    target_sources(WPL PRIVATE ${CMAKE_BINARY_DIR}/wpl.rc)
endif()
