#include "Game.h"

Game* Game::m_Instance = 0;

Game::Game()
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

Game::~Game()
{
}

void Game::addGameLoop(GameState* pGamestate)
{
	m_vecGameLoops.push_back(pGamestate);
}

void Game::Run()
{
	for (int i = 0; i < m_vecGameLoops.size(); i++)
	{
		m_vecGameLoops.at(i)->loop();
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
