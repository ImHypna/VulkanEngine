#include "lve_window.hpp"

namespace lve
{
    LveWindow::LveWindow(int w, int h, std::string name) : width{w}, height{h},windName{name}{
        initWindow();

    }
    LveWindow::~LveWindow(){
        glfwDestroyWindow(window);
        glfwTerminate();
    }
    void LveWindow::initWindow(){
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API,GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE,GLFW_FALSE);

        window = glfwCreateWindow(width,height,windName.c_str(),nullptr,nullptr);

    }

} //namespace lve
