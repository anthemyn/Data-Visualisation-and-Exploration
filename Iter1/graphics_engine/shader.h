//Adapted from LearnOpenGL
//Joey DeVries
//https://github.com/JoeyDeVries/LearnOpenGL

#pragma once
#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
private:
	int success;
	char infoLog[1024];

	void checkCompileErrors(unsigned int shader, std::string type);
public:
	unsigned int ID;

	Shader(const char* vertexPath, const char* fragmentPath);

	void use();

	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;
};