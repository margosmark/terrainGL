// terrainGL.cpp : main project file.

#include "stdafx.h"
#include "glew.h"
#include "glut.h"

using namespace System;

static int make_resources(void)
{
	return 1;
}

static void update_fade_factor(void)
{
}

static void render(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(400, 300);
	glutCreateWindow("Hello World");
	glutDisplayFunc(&render);
	glutIdleFunc(&update_fade_factor);
	glewInit();
	if (!GLEW_VERSION_2_0) {
		//fprintf(stderr, "OpenGL 2.0 not available\n");
		return 1;
	}
	if (!make_resources()) {
		//fprintf(stderr, "Failed to load resources\n");
		return 1;
	}

	glutMainLoop();
	return 0;
}
