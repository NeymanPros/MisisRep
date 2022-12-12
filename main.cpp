#include <iostream>
#include "Victor.h"

int main() {
    std::cout.precision(4);
    double dist = 0;
    nt a = {0, 5}, skor = {1.3, 0}, dvi;
    pol acc = {1, 1}, speed, mov;

    //std::cin >> a.x >> a.y >> skor.x >> skor.y >> acc.len;
    acc.len = -acc.len;

    for (int t = 0; t < 50; t++) {
        dist = abs(a.x * a.x + a.y * a.y);
        ntToAlfa(a, acc);
        ntToPol(skor, speed);
        mov = sum(speed, {acc.alfa, acc.len/dist});
        PolToNt(dvi, mov);
        a.x += dvi.x / 10;
        a.y += dvi.y / 10;
        skor.x = dvi.x;
        skor.y = dvi.y;
        std::cout << a.x << "\t" << a.y << "\n";
    }
}