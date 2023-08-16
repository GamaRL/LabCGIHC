#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

// Definición de constantes
const int NO_CUENTA = 15002126;

//Dimensiones de la ventana
const int WIDTH = 800, HEIGHT = 600;

static const GLfloat g_vertex_buffer_data[] = {
  -1.0f, -1.0f, 0.0f,
   1.0f, -1.0f, 0.0f,
   0.0f,  1.0f, 0.0f,
};

int main()
{
  //Inicialización de GLFW
  if (!glfwInit())
  {
    std::cerr << "Falló al inicializar GLFW" << std::endl;
    glfwTerminate();
    return 1;
  }
  //Asignando variables de GLFW y propiedades de ventana
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  //para solo usar el core profile de OpenGL y no tener retrocompatibilidad
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

  //CREAR VENTANA
  GLFWwindow *mainWindow = glfwCreateWindow(WIDTH, HEIGHT, "Primer ventana", NULL, NULL);

  if (!mainWindow)
  {
    std::cerr << "Falló en crearse la ventana con GLFW" << std::endl;
    glfwTerminate();
    return 1;
  }
  //Obtener tama�o de Buffer
  int BufferWidth, BufferHeight;
  glfwGetFramebufferSize(mainWindow, &BufferWidth, &BufferHeight);

  //asignar el contexto
  glfwMakeContextCurrent(mainWindow);

  //permitir nuevas extensiones
  glewExperimental = GL_TRUE;

  if (glewInit() != GLEW_OK)
  {
    std::cerr << "Falló inicialización de GLEW" << std::endl;
    glfwDestroyWindow(mainWindow);
    glfwTerminate();
    return 1;
  }

  // Asignar valores de la ventana y coordenadas
  //Asignar Viewport
  glViewport(0, 0, BufferWidth, BufferHeight);

  // Información del equipo
  std::cout << "Número de cuenta   : " << NO_CUENTA << std::endl;
  std::cout << "Versión de Opengl  : " << glGetString(GL_VERSION) << std::endl;
  std::cout << "Marca              : " << glGetString(GL_VENDOR) << std::endl;
  std::cout << "Renderer           : " << glGetString(GL_RENDERER) << std::endl;
  std::cout << "Shaders            : " << glGetString(GL_SHADING_LANGUAGE_VERSION) << std::endl;

  while (!glfwWindowShouldClose(mainWindow))
  {
    //Recibir eventos del usuario
    glfwPollEvents();

    //Limpiar la ventana
    glClearColor(0.2f,0.1f,0.2f,1.0f);

    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(mainWindow);

  }

  return 0;
}
