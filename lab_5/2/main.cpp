#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mat[10] = {};
    
    while (n > 0)
    {
        mat[n % 10] += 1;
        n /= 10;
    }

    short max_cnt = -1;
    short max_i = -1;
    for (int i = 0; i < 9; i++)
        if (mat[i] > max_cnt)
        {
            max_cnt = mat[i];
            max_i = i;
        }
    
    cout << max_i;
    
    return 0;
}
