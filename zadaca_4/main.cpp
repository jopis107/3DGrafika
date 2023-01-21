#include <iostream>
#include "glad.h"
#include<glfw3.h>
#include "Shader.hpp"

//GLM
#include "glm.hpp"
#include "matrix_transform.hpp"
#include "type_ptr.hpp"

#define STB_IMAGE_IMPLEMENTATION

#include "Application.h"
#include "Camera.h"
int main() {
    Application App(1920, 1080, "GLCraft", Camera(1920, 1080));
    App.runLoop();
    return 0;
}