#ifndef __board__
#define __board__
#include<vector>
#include<cstdlib>
#include<stdexcept>
class board
{
private:
    size_t boardSize = 3;
    std::vector<std::vector<int>> tiles = std::vector<std::vector<int>>(3,std::vector<int>(3));
public:
    explicit board();
    explicit board(size_t s);
    int resize(int size);
    void setup();
    void loadTiles(std::vector<int> newTiles); 
    void display();
    ~board();
};

#endif
