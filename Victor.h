#include <ostream>
#include <cmath>
#include <vector>

struct cords{
    double x;
    double y;
};

struct nt{
    double x = 0;
    double y = 0;
};

struct pol{
    double alfa = 0;
    double len = 0;
};

struct answer{
    double sc = 0;
    nt sumnt = {0, 0};
    pol sumpol = {0, 0};
};


void ntToPol(const nt &a, pol &b){
    b.len = sqrt(a.x * a.x + a.y * a.y);
    b.alfa = asin(a.y / b.len);
}


void scalar(const nt &a, const nt &b, std::vector <answer> &ans, const int &i){
    ans.resize(ans.size() + 1);
    ans[i].sc = a.x * b.x + a.y * b.y;
    std::cout << a.x * b.x + a.y * b.y << "\n";
}

void scalar(const pol &a, const pol &b) {
    std::cout << a.len * b.len * cos(a.alfa - b.alfa) << "\n";
}


answer sum(const nt &a, const nt &b, std::vector <answer> &ans, const int &i) {
    ans[i].sumnt = {a.x + b.x, a.y + b.y};
    std::cout << a.x + b.x << " " << a.y + b.y << "\n";
    return {a.x + b.x, a.y + b.y};
}

void sum(const pol &a, const pol &b, std::vector <answer> &ans, const int &i){
    a.len - b.len * (a.alfa / b.alfa);
    std::cout << " ";
}