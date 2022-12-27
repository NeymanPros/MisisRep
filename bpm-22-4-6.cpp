#include <iostream>
#include <vector>
#include <cmath>
int main() {
    std::string cw;
    int h, w, now = 1;
    std::cin >> h >> w >> cw;
    std::vector<std::vector<int>> mat;

    for (int i = 0; i < h; i++) {
        mat.push_back({0});
        for (int j = 1; j < w; j++) {
            mat[i].push_back(0);
        }
    }

    if (cw == "cws") {
        int i = 0, j = 1;
        for (int e = 0; e < h / 2 + (int) (h % 2); e++) {

            j = 1 - e;
            i = 1 - e;
            for (; j <= w - e && now < h * w; j++) {
                mat[h - i][w - j] = now;
                now++;
            }

            j = w - e;
            i = 2 - e;
            for (; i <= h - e && now < h * w; i++) {
                mat[h - i][w - j] = now;
                now++;
            }
            j = w - 1 - e;
            i = w - e;
            for (; j > 0 + e && now < h * w; j--) {
                mat[h - i][w - j] = now;
                now++;
            }

            j = w - e;
            i = w - 1 - e;
            for (; i > 1 + e && now < h * w; i--) {
                mat[h - i][w - j] = now;
                now++;
            }
        }

    }


    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            std::cout << mat[i][j] << " ";
        }
        std::cout << "\n";
    }
}
