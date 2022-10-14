#include <iostream>
#include <cmath>

int main() {
    double s, x = 0, i, n = 0;
    bool bigger = false;
    std::cout.precision(3);
    std::cout << "x\ts(x)\ty(x)\n";
    for(; x < 20; x++){
        s = 0;
        bigger = true;
        n = x/20*sin(M_PI/4);
        for(i = 1; bigger; i++){
            n *= (x/20);
            if(std::abs(n) > 0.001) {
                s += n;
            }
            else {
                bigger = false;
                std::cout << x / 10 << "\t" << s << "\t" << (x/20*sin(M_PI_4)/(1 - 2*x/20*cos(M_PI_4))) << "\n";
            }
        }
    }
}