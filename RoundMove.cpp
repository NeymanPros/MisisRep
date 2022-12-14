#include <iostream>
//#include <fstream>
#include "Victor.h"

int main() {
    //std::ofstream otv("report.txt");
    std::cout.precision(4);
    double dist = 0;
    nt a = {-5, 5}, skor = {0, 0}, dvi;
    pol acc = {1, 1}, speed, mov;

    //std::cin >> a.x >> a.y >> skor.x >> skor.y >> acc.len;
    acc.len = -acc.len;

    for (int t = 0; t < 100; t++) {
        dist = a.x * a.x + a.y * a.y;
        ntToAlfa(a, acc);
        ntToPol(skor, speed);
        mov = sum(speed, {acc.alfa, acc.len / dist});
        PolToNt(dvi, mov);

        if (std::abs(a.x * a.x + a.y * a.y) < 0.5) {
            a.x += dvi.x / 5;
            a.y += dvi.y / 5;
        }
        else {
            a.x += dvi.x / 10;
            a.y += dvi.y / 10;
        }

        skor.x = dvi.x;
        skor.y = dvi.y;

        std::cout << a.x << "\t" << a.y << std::endl;
        //otv << a.x << "\t" << a.y << "\n";
    }
}