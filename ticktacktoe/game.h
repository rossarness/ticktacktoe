#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string.h>

using namespace std;

class game
{
public:
    getInput();
    store();
    store(string inData,int inX,int inY);
    printBoard();

private:
    string inputData;
    int x;
    int y;
    string fields [2][2];

};

game::getInput()
{
    cout << "Please provide coordinates of field you want to use" << endl;
    cin >> x >> y;
    cout << "Please provide input" << endl;
    cin >> inputData;
    /*cout << a << endl;*/
    x = x - 1;
    y = y - 1;
    store(inputData,x,y);
    return 0;
}

game::store(string inData,int inX,int inY)
{
    fields[inX][inY] = inData;
    printBoard();
    return 0;
}

game::printBoard()
{

    for(x = 0; x <= 2; x++){
        for(y = 0; y <= 2; y++)
            printf("Row: %d Column: %d Value stored is: %s \n", x , y , fields[x][y]);
    }
    return 0;
}



#endif // GAME_H
