OpenGLEngine:main.o Game.o GameState.o StartGameState.o
	g++ -o OpenGLEngine main.o Game.o GameState.o StartGameState.o `pkg-config --libs glfw3` -framework opengl
	rm -fr *.o
StartGameState.o:StartGameState.cpp
	g++ -g -c StartGameState.cpp
GameState.o:GameState.cpp
	g++ -g -c GameState.cpp
Game.o:Game.cpp
	g++ -g -c Game.cpp
main.o:main.cpp
	g++ -g -c main.cpp
clean:
	rm -fr OpenGLEngine
