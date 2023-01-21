#include "Application.h"

//zasad cu hardkodirat atribute za renderer
Application::Application(unsigned int w, unsigned int h, const std::string &name, const Camera& camera)
    : context(Context(camera, w, h, name)), renderer(
        w, h,
        "C:\Users\Korisnik\Desktop\MATHOS\MATHOS 2\3D\zadaca_4/normalVertexShader.vert",
        "C:\Users\Korisnik\Desktop\MATHOS\MATHOS 2\3D\zadaca_4/normalFragmentShader.frag",
        "C:\Users\Korisnik\Desktop\MATHOS\MATHOS 2\3D\zadaca_4/lightVertexShader.vert",
        "C:\Users\Korisnik\Desktop\MATHOS\MATHOS 2\3D\zadaca_4/lightFragmentShader.frag"
    ) {}

void Application::runLoop() {
    context.camera.ProcessMouseMovement(0.1, 0);
    while(!glfwWindowShouldClose(context.window)) {
        context.adjustDeltaTime();
        context.handleKeyboardInput(context.window); //kontinuriani input
        renderer.render(context.window, context.camera);
    }
    renderer.clearData();
    glfwTerminate();
}