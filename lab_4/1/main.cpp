#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a > b) && (b > c))
        cout << a - b - c;
    else
        cout << a + b + c;

    return 0;
}