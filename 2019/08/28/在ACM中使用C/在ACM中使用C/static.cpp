#include <iostream>
using namespace std;

struct P {
    int x, y;
    
    P operator+(constP& o) const {
        return P{x+o.x, y+o.y};
    }
};

constexpr P a{0, 0}, b{1, 1};
constexpr c=a+b;

int main() {
    
}