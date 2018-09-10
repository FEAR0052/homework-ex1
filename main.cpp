#include "iostream"
#include "math.h"

using namespace std;

int main() {
    double x = 0.1;
    double y;
    double pi = 3.14;

    while (x <= 0.6) {
        y = sqrt(exp(2.2 * x)) - abs(sin((pi * x) / (x + 2.0 / 3.0)) + 1.7);
        cout << x << "==>" << y << endl;
        x += 0.1;
    }
    return 0;
}















































