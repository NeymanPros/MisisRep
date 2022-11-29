#include <iostream>
#include "Victor.h"

int main() {
    std::cout.precision(3);
    cords m, c;
    double ms = 0, mr = 0, cs = 0, cr = 0, add = 0;
    cords cv = {0, 0};
    std::cout << "x, y, speed, r\n";
    std::cin >> m.x >> m.y >> ms >> mr >> c.x >> c.y >> cs >> cr;
    double xa = c.x;

    for(int i = 10; i > 0; i--){
        add = (xa - m.x)/i;
        m.x += add;
        cv.x = m.x - c.x;
        cv.y = (m.y - c.y);
        c.x += cv.x/i*cs/ms;
        c.y += cv.y/i*cs/ms;

        std::cout << "\t" << m.x << "\t" << m.y << "\t" << c.x << "\t" << c.y << "\n";
    }
}
/*m.x = (m.x < 0.0001 ? 0 : m.x);
cv.x = (cv.x < 0.0001 ? 0 : cv.x);
cv.y = (cv.y < 0.0001 ? 0 : cv.y);*/