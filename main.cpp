#include <iostream>
#include "Game.h"
#include "GameState.h"
#include "StartGameState.h"

int main(int argc, char* argv[])
{
	StartGameState start;
	Game::Instance()->addGameLoop(&start);
	Game::Instance()->Run();
	return 0;
}
