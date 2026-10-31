add_executable(01-simple-window
	src/main.cpp
	)

find_package(OpenGL REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(GLEW REQUIRED)

target_link_libraries(01-simple-window
	PRIVATE
		OpenGL::GL
		glfw
		GLEW::GLEW
	)
