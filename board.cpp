#include <iostream>
#include <cmath>
#include "board.h"
using namespace std;

board::board()
{
    this->setup();
    
}

board::board(size_t s)
{
  resize(s); 
  setup();
}

board::~board()
{
}

void board::setup()
{
  unsigned int count = 0;
  for(size_t i=0; i<boardSize; i++)
  {
    for(size_t j=0; j<boardSize;j++)
    {
      tiles[i][j] = count++;
      if(count == boardSize*boardSize - 1) break;
    }
  }
}

int board::resize(int size)
{
  boardSize = size;
  tiles.resize(size);
  for(size_t i=0; i<size; i++)
  {
    tiles[i].resize(size);
  }
  return boardSize;
}

void board::loadTiles(vector<int> newTiles)
{
  size_t size = sqrt(newTiles.size());
  if(size*size != newTiles.size()) {
    size++;
  }
  resize(size);
  for(size_t i=0; i<boardSize; i++)
  {
    for(size_t j=0; j<boardSize;j++)
    {
      size_t index = i*boardSize+j;
      tiles[i][j] = index < newTiles.size() ? newTiles[index] : 0;
    }
  }
}

bool board::solveboard()
{
  
}

void board::display()
{
  for(size_t i=0; i<boardSize; i++)
  {
    for(size_t j=0; j<boardSize;j++)
    {
      cout << tiles[i][j] << " ";
    }
      cout << endl;
  }
}
