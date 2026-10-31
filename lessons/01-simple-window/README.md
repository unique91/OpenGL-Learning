# Chapter 01 – First OpenGL Window

## 1. What will you learn in this chapter?

- Create an OpenGL window with GLFW.
- Initialize GLEW.
- Build a basic render loop.
- Set the background color with `glClearColor`.
- Properly clean up the window and libraries.

## 2. Theory

GLFW manages the window, the OpenGL context, and user input. GLEW loads the required OpenGL functions. OpenGL then handles rendering and displaying the contents of the window.

## 3. Implementation

`main.cxx` first initializes GLFW and GLEW. A window with an OpenGL context is then created. The render loop clears the screen, processes events, and displays the current frame.

## 4. Project Setup

The project uses CMake, C++, GLFW, GLEW, and OpenGL. The source file `main.cxx` is located in `lessons/01-simple-window/`.

## 5. Result

When the program starts, an OpenGL window appears with the selected background color. The window remains open until it is closed.