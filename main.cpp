#include <iostream>
#include "game.h"

using namespace std;

int main() {
  game g;
  bool cont = true;
  while (cont) {
    cont = g.getInput();
  }

  return 0;
}
