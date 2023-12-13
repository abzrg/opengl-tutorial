// clang-format off
#include <glad/glad.h>
#include <GLFW/glfw3.h>
// clang-format on

#include <iostream>

constexpr auto kLowerLeftX{ 0 };
constexpr auto kLowerLeftY{ 0 };
constexpr auto kWinWidth{ 800 };
constexpr auto kWinHeight{ 600 };
constexpr auto kWinTitle{ "Learn OpenGL" };

void processInput(GLFWwindow* window);
void framebuffer_size_callback(GLFWwindow* window, int width, int height);


int main()
{
    // glfw: initialization and configuration
    if (glfwInit() == GLFW_FALSE) {
        std::cerr << "Could not initialize GLFW." << std::endl;
        return -1;
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    // glfw: creating window
    GLFWwindow* window
        = glfwCreateWindow(kWinWidth, kWinHeight, kWinTitle, nullptr, nullptr);
    if (window == nullptr) {
        std::cerr << "Failed to create GLFW window." << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // glad: initialization
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Failed to initialize GLAD." << std::endl;
        return -1;
    }

    // Render Loop (each iteration == frame)
    while (!glfwWindowShouldClose(window)) {
        // Input
        processInput(window);

        // Render
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f); // rgba [0,1]
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap buffers and Poll IO events
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // glfw: Clear allocated resources
    glfwTerminate();

    return 0;
}


// glfw: process all input; query glfw whether relavant key are pressed/released
// in the current frame and react accordingly
void processInput(GLFWwindow* window)
{
    if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, true);
    }
}

// glfw: callback function to adjust the viewport upon window resize
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    (void)window;
    glViewport(kLowerLeftX, kLowerLeftY, width, height);
}
