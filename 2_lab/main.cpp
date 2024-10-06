#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, angle;
    cin >> a >> b >> angle;
    float s = abs(sin(angle) * (180 / M_PI));
    cout << 0.5 * a * b * s;
}