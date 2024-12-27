#include <GL/gl.h>
#include <GLFW/glfw3.h>

int main(int argc, char* argv[] ) {
    // Create window
    GLFWwindow* window;

    if (!glfwInit()) return -1;

    // Init window + make current context
    window = glfwCreateWindow(720, 480, "Hello Window!", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // Set window as current context
    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window)) {
        // Render
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap last buffer with next
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
