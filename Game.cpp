#include "Game.h"
#include <iostream>
using namespace std;

Game* Game::m_Instance = 0;

Game::Game(): m_CurrentIndex(0)
{
	if(!glfwInit()) {
		glfwTerminate();
		return;
	}

	m_mainWindow = glfwCreateWindow(640,480,"OpenGL Engine Demo", NULL, NULL);

	if( !m_mainWindow) {
		glfwTerminate();
		return ;
	}
	else {
		glfwMakeContextCurrent(m_mainWindow);
	}
	
}

void Game::popGameLoop()
{
	m_CurrentIndex--;
	m_vecGameLoops.pop_back();
}

Game::~Game()
{
}

void Game::addGameLoop(GameState* pGamestate)
{
	m_vecGameLoops.push_back(pGamestate);
	m_CurrentIndex++;
}

void Game::Run()
{
	while(!glfwWindowShouldClose(glfwGetCurrentContext())) {
		glfwSwapBuffers(glfwGetCurrentContext());
		m_vecGameLoops.at(m_CurrentIndex - 1)->loop();
		glfwPollEvents();
	}
}

Game* Game::Instance()
{
	if ( m_Instance == 0) {
		m_Instance = new Game();
	}

	return m_Instance;
}

GLFWwindow* Game::getMainWindow()
{
	return m_mainWindow;
}
