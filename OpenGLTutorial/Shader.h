#pragma once

#include <string>
#include <GL/glew.h>

class Shader
{
public:
	Shader(const std::string& filename);

	void bind();

	virtual ~Shader();
private:
	static const unsigned int NUM_SHADER = 2;

	Shader(const Shader& other) { }
	Shader& operator=(const Shader& rhs) { }

	std::string loadShader(const std::string& filename);
	void checkShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);
	GLuint createShader(const std::string& text, GLenum shaderType);

	GLuint m_program;
	GLuint m_shaders[NUM_SHADER];
};

