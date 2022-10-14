#include <iostream>
#include <cmath>

int main() {
    double s, n, x = -10, i;
    bool bigger = false;
    std::cout.precision(3);
    std::cout << "x\ts(x)\ty(x)\n";
    for(; x <= 10; x++){
        s = 0;
        bigger = true;
        for(i = 0; bigger; i++){
            n = 1;
            for(int j = 2; j <= 2*i; j++){
                n *= j;
            }
            if(std::abs(std::pow(-1, i)*std::pow(x/10, 2*i)/2/n) > 0.001) {
                s += std::pow(-1, i)*std::pow(x/10, 2*i)/n;
            }
            else{
                bigger = false;
                std::cout << x/10 << "\t" << s << "\t" << cos(x/10) << "\n";
            }
        }
    }
}