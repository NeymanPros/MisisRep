#include <iostream>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    int ans = a.length() + b.length();

    for(int i = 0; ans > 0 && a.length() > i && b.length() > i; i++){
        if(a[a.length() - i - 1] == b[b.length() - i - 1]){
            ans -= 2;
        }
    }

    std::cout << ans;
}