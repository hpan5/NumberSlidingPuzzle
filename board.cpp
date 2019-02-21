#include<iostream>
#include "board.h"
using namespace std;

board::board()
{
    tiles = new int*[boardSize];
    for(size_t i=0; i<boardSize; i++)
    {
      tiles[i] = new int[boardSize];
    }
    this->setup();
}

board::board(size_t s)
{
  tiles = new int*[s];
  for(size_t i=0; i<s; i++)
  {
    tiles[i] = new int[s];
  }
  boardSize = s;
  this->setup();
}

board::~board()
{
  for(size_t i=0; i<boardSize; i++)
  {
    delete[] tiles[i];
  }
  delete[] tiles;
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
