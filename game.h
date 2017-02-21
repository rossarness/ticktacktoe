#ifndef GAME_H
#define GAME_H
#include <stdio.h>
#include <cstdio>
#include <string.h>



class game {
 public:
  void choosePlayer();
  bool getInput();
  void store(char inData, int inX, int inY);
  void printBoard();

 private:
  //  string inputData;
  //  int x;
  //  int y;
  char fields[3][3]{{0}};
  int player{0};
};

void game::choosePlayer() {
    while (player != 1 || player != 2) {
        std::printf("Which player would you like to use:\n1) X\n2) Y\n: Choice: ");
        std::scanf("%d", &player);
        if (player < 0 || player > 2) {
            std::printf("Your choice [%d] is invalid. Try again.", player);
        }
    }
}

bool game::getInput() {
  std::printf("Please provide coordinates of field you want to use");

  char u{0};
  if (player == 1){
      u = 'X';
  } else {
      u = 'Y';
  }
  int x{0}, y{0};
  std::scanf ("%d %d", &x, &y);
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
      std::printf("Row: %d Column: %d Value stored is: %c \n", x, y, fields[x][y]);
  }
}

#endif  // GAME_H
