#include <stdio.h>
#include "game.h"


int main() {

    std::printf("Weclome to TickTacToe game!");
    game g;
    g.choosePlayer();
    bool cont = true;
    while (cont) {
        cont = g.getInput();
    }

    return 0;
}
