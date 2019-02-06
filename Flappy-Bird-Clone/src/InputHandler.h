//
//  InputHandler.hpp
//  Flappy-Bird-Clone
//
//  Created by Túlio Henrique on 03/02/19.
//  Copyright © 2019 Túlio Henrique. All rights reserved.
//

#ifndef InputHandler_h
#define InputHandler_h

#include "GLFW/glfw3.h"

#include <map>

class InputHandler {
private:
    InputHandler(){}
    
    InputHandler(InputHandler const&);
    void operator=(InputHandler const&);
    
public:
    inline static InputHandler& getInstance() {
        static InputHandler instance;
        return instance;
    }
    
    void bind(GLFWwindow* window);
    
    static void _glfwKeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
    void glfwKeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
    
    inline std::map<int, bool> getPressedKeys() const { return m_pressedKeys; }
private:
    std::map<int, bool> m_pressedKeys;
};

#endif /* InputHandler_h */
