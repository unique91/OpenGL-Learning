cmake_minimum_required(VERSION 3.22.1)

project(OpenGL-Learning
    LANGUAGES CXX
	VERSION 1.0
	DESCRIPTION "A collection fo OpenGL learning projects"
	)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(lessons/01-simple-window)
