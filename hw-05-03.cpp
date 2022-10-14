#include <iostream>
#include <cmath>

int main() {
    double s, n, x = 0, i;
    bool bigger = false;
    std::cout.precision(4);
    std::cout << "x\ts(x)\ty(x)\n";
    for(; x <= 10; x++){
        s = 0;
        bigger = true;
        for(i = 0; bigger; i++){
            n = 1;
            for(int j = 2; j <= i; j++){
                n *= j;
            }
            if(std::abs(std::pow(2*x/10, i)/n) > 0.0001) {
                s += std::pow(2*x/10, i)/n;
            }
            else{
                bigger = false;
                std::cout << x / 10 << "\t" << s << "\t" << std::pow(M_E, 2*x/10) << "\n";
            }
        }
    }
}