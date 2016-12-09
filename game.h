#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

class game {
 public:
  bool getInput();
  void store(char inData, int inX, int inY);
  void printBoard();

 private:
  //  string inputData;
  //  int x;
  //  int y;
  char fields[3][3]{{0}};
};

bool game::getInput() {
  cout << "Please provide coordinates of field you want to use" << endl;

  char u{0};
  int x{0}, y{0};
  scanf("%c %d %d", &u, &x, &y);
  //  cin >> x >> y;
  //  cout << "Please provide input" << endl;
  //  cin >> inputData;
  /*cout << a << endl;*/
  x = x - 1;
  y = y - 1;
  store(u, x, y);

  return true;  // Game never finishes or do something else
}

void game::store(char inData, int inX, int inY) {
  fields[inX][inY] = inData;
  printBoard();
}

void game::printBoard() {
  for (int x = 0; x < 3; x++) {
    for (int y = 0; y < 3; y++)
      printf("Row: %d Column: %d Value stored is: %c \n", x, y, fields[x][y]);
  }
}

#endif  // GAME_H
