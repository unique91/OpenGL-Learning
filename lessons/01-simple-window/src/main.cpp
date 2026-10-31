#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

const GLint WIDTH = 800;
const GLint HEIGHT = 600;

int main()
{
	std::cout << "My First OpenGL Program" << std::endl;

    // 1. Initialize GLFW
    if (!glfwInit())
    {
        std::cerr << "Fehler: GLFW konnte nicht initialisiert werden.\n";
        return 1;
    }

    // 2. Set OpenGL version: OpenGL 3.3
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // Required for MacOS
    // 3. Create window
    GLFWwindow* window = glfwCreateWindow(
        WIDTH, HEIGHT,
        "My First OpenGL Application",
        nullptr, nullptr
    );

    if (window == nullptr)
    {
        std::cerr << "Fehler: Fenster konnte nicht erstellt werden.\n";
        glfwTerminate();
        return 1;
    }

    // Get framebuffer size
    int bufferWidth, bufferHeight;
    glfwGetFramebufferSize(window, &bufferWidth, &bufferHeight);

    // 4. Activate OpenGL context
    glfwMakeContextCurrent(window);

    // 5. Initialize GLEW
    glewExperimental = GL_TRUE;

    if (glewInit() != GLEW_OK)
    {
        std::cerr << "Error: GLEW could not be initialized.\n";
        glfwDestroyWindow(window);
        glfwTerminate();
        return 1;
    }

    // Set viewport to window size
    glViewport(0, 0, bufferWidth, bufferHeight);

    std::cout << "OpenGL version: "
        << glGetString(GL_VERSION) << '\n';

    // 6. Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Set background color: Blue
        glClearColor(0.0f, 0.0f, 1.0f, 1.0f);

        // Clear window content and draw background
        glClear(GL_COLOR_BUFFER_BIT);

        // Display drawing on the screen
        glfwSwapBuffers(window);

        // Process keyboard and window events
        glfwPollEvents();
    }

    // 7. Release resources
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
