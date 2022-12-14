#include <cmath>

struct nt{
    double x = 0;
    double y = 0;
};

struct pol{
    double alfa = 0;
    double len = 0;
};

void ntToPol(const nt &a, pol &b) {

    b.len = sqrt(a.x * a.x + a.y * a.y);
    if(b.len < 0.0001){
        b.alfa = 0;
        b.len = 0;
        return;
    }
    b.alfa = asin(a.y / b.len);
    if(a.x < 0){
        b.alfa = (a.y > 0 ? M_PI - b.alfa : -M_PI - b.alfa);
    }
}

void ntToAlfa(const nt &a, pol &b) {
    if(sqrt(a.x * a.x + a.y * a.y) < 0.0001){
        b.len = 0;
        b.alfa = 0;
        return;
    }

    b.alfa = asin(a.y / sqrt(a.x * a.x + a.y * a.y));
    if(a.x < 0){
        b.alfa = (a.y > 0 ? M_PI - b.alfa : -M_PI - b.alfa);
    }
}

void PolToNt(nt &a, const pol &b) {
    a.x = b.len * cos(b.alfa);
    a.y = b.len * sin(b.alfa);
}

nt sum(const nt &a, const nt &b) {
    return {a.x + b.x, a.y + b.y};
}

pol sum(const pol &a, const pol &b) {
    nt ua, ub;
    pol ans;
    PolToNt(ua, a);
    PolToNt(ub, b);
    ua = sum(ua, ub);
    ntToPol(ua, ans);
    return ans;
}