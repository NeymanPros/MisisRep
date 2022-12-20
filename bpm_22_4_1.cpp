#include <iostream>
#include <cmath>

int main() {
    double x = 0.05, eps = 0.0001, dev = 2;

    for (int i = 1; i < 100; i++) {
        if ((pow(x, 2 * i) + x) / dev >= eps) {
            x += pow(x, 2 * i) / dev;
            std::cout << x << " ";
        }
        else{
            i = 101;
        }
        x += 0.05;
        dev = dev * (2 * i + 1) * (2 * i + 2);
    }
}