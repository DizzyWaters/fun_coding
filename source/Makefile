CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SRC = main.cpp Game.cpp Map.cpp Tiles.cpp Entity.cpp Player.cpp Monster.cpp
OBJ = $(SRC:.cpp=.o)

all: game

game: $(OBJ)
	$(CXX) $(CXXFLAGS) -o game $(OBJ)

clean:
	rm -f *.o game

