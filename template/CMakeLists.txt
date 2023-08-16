# Porject settings
cmake_minimum_required(VERSION 3.5)
project(practica1)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)

# Set the OpenGL version
set(OpenGL_GL_PREFERENCE GLVND)


# Required libraries installed in the system
find_package(glfw3 3.3 REQUIRED)

find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})
link_libraries(${OPENGL_LIBRARIES})

find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})
link_libraries(${GLEW_LIBRARIES})

find_package(glm REQUIRED)
include_directories(${GLM_INCLUDE_DIRS})
link_libraries(${GLM_LIBRARIES})


# Source files
add_executable(
  practica1 src/segundo_main.cpp
  src/Mesh.cpp
  src/Shader.cpp
  src/Window.cpp
)

# Include files
target_include_directories(practica1
  PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

# Linked libraries settings
target_link_libraries(practica1 glfw Xrandr Xi Xinerama Xcursor)
