#include "StartGameState.h"

StartGameState::StartGameState()
{
}

StartGameState::~StartGameState()
{
}

void StartGameState::loop()
{
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-1.0, -1.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glColor3f(0.0,0.0,1.0);
	glVertex3f(1.0, -1.0, 0.0);
	
	glEnd();

}
