#include "board.h"
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    vector<int> scan_num;
    while(1) 
    {
        int num;
        cin >> num;
        if(cin) scan_num.push_back(num);
        else break;
    }
    int dim = sqrt(scan_num.size());
    board board(dim);
    board.loadTiles(scan_num);
   
    board.display();
    return 0;
}
