#ifndef __board__
#define __board__
#include<vector>
#include<cstdlib>
#include<stdexcept>
class board
{
private:
    size_t boardSize = 3;
    int **tiles = nullptr;
public:
    explicit board();
    explicit board(size_t s);
    void setup();
    void display();
    ~board();
};

#endif
