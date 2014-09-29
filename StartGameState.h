#ifndef STARTGAMESTATE_HEADER
#define STARTGAMESTATE_HEADER

#include <GLFW/glfw3.h>

#include "GameState.h"

class StartGameState : public GameState
{
	public:
	StartGameState();
	~StartGameState();

	void loop();
};
#endif
