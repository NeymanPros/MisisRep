#include <iostream>

int main() {
    double x, y;
    std::string enter;
    std::getline(std::cin, enter);

    for(int i = 0; i < enter.length();){
        if(x*x + y*y < 1){
            std::cout << "Yes\n";
        }
        else{
            std::cout << "No\n";
        }
    }
}