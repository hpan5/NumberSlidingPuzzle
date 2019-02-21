CC=g++
CXXFLAGS=-g -Wall -std=c++11
SRC= main.o board.o

main: main.o board.o
	$(CXX) $(CXXFLAGS) -o main main.o board.o

main.o: main.cpp board.h

board.o: board.h

clean:
	rm $(SRC) main
