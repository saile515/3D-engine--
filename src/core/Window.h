#pragma once

#include <GLFW/glfw3.h>

class Window
{
public:
    int width = 640;
    int height = 480;
    GLFWwindow *window;

    int init();

    bool shouldUpdate();

    void terminate();
};