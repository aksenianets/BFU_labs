#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    short x = pow(-1, n);
    if (x) cout << "Positive number";
    else cout << "Negative number";

    return 0;
}