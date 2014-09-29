#include "StartGameState.h"

StartGameState::StartGameState()
{
}

StartGameState::~StartGameState()
{
}

void StartGameState::loop()
{
	while(!glfwWindowShouldClose(glfwGetCurrentContext())) {
		glfwSwapBuffers(glfwGetCurrentContext());
		glfwPollEvents();

	}

}
