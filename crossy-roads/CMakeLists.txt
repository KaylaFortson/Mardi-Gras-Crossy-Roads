cmake_minimum_required(VERSION 2.8)
PROJECT(FINAL_PROJECT_CROSSY_ROADS)
SET(CMAKE_BUILD_TYPE "Release")

if (!MSVC)
SET(CMAKE_CXX_FLAGS "-Wno-deprecated")
endif()

#Compile and Link GLFW
ADD_SUBDIRECTORY(glfw-3.2)
link_libraries(glfw)
include_directories(${glfw_INCLUDE_DIRS})
include_directories("${CMAKE_SOURCE_DIR}/glfw-3.2/deps")

add_library(glad "${CMAKE_SOURCE_DIR}/glfw-3.2/deps/glad/glad.h"
                  "${CMAKE_SOURCE_DIR}/glfw-3.2/deps/glad.c")
                 
link_libraries(glad)

SET(MY_SHADER_PATH ${CMAKE_SOURCE_DIR}/shaders/)
CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/shaders/shader.cpp.in ${CMAKE_SOURCE_DIR}/shaders/shader.cpp)


include_directories(${CMAKE_SOURCE_DIR}/source
                    ${CMAKE_SOURCE_DIR}/source/common
                    ${CMAKE_SOURCE_DIR}/shaders)
                    
add_executable(crossy_roads WIN32 MACOSX_BUNDLE
    source/pelican.cpp
    source/pelican.h
    source/floats.cpp
    source/floats.h
    source/lane.cpp
    source/lane.h
    source/grass.h
    source/grass.cpp
    source/main.cpp
    source/common.h
    shaders/fshader.glsl
    shaders/vshader.glsl
    shaders/shader.cpp
    shaders/shader.h
    source/common/Angel.h
    source/common/mat.h
    source/common/u8names.cpp
    source/common/u8names.h
    source/common/CheckError.h
    source/common/vec.h)
    
#Windows cleanup
if (MSVC)
    # Tell MSVC to use main instead of WinMain for Windows subsystem executables
    set_target_properties(crossy_roads PROPERTIES LINK_FLAGS "/ENTRY:mainCRTStartup")
endif()

#Apple cleanup
if (APPLE)
    set_target_properties(crossy_roads PROPERTIES MACOSX_BUNDLE_BUNDLE_NAME "simple")
    
    set_target_properties(crossy_roads PROPERTIES
                          MACOSX_BUNDLE_SHORT_VERSION_STRING ${GLFW_VERSION}
                          MACOSX_BUNDLE_LONG_VERSION_STRING ${GLFW_VERSION_FULL}
                          MACOSX_BUNDLE_ICON_FILE glfw.icns)
endif()
