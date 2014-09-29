#include <iostream>
#include "Game.h"
#include "GameState.h"
#include "StartGameState.h"

int main(int argc, char* argv[])
{
	StartGameState start;
	StartGameState second;
	Game::Instance()->addGameLoop(&start);
	Game::Instance()->addGameLoop(&second);
	Game::Instance()->Run();
	return 0;
}
