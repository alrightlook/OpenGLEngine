#ifndef GAME_HEADER
#define GAME_HEADER

#include <GLFW/glfw3.h>
#include <vector>
#include "GameState.h"

class Game
{
	private:
	Game();
	~Game();
	static Game* m_Instance;
	GLFWwindow* m_mainWindow;
	std::vector<GameState*> m_vecGameLoops;
	int m_CurrentIndex;

	public:
	static Game* Instance();
	void Run();
	void addGameLoop(GameState* pGamestate);
	GLFWwindow* getMainWindow();
};

#endif
