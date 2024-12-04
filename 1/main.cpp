#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    short N_MAX = 10'000;
    int mat[N_MAX];
    
    int n;
    cin >> n;
    
    bool fl = false;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        mat[i] = num;
        
        for (int j = 1; j < sqrt(num); j++)
        {
            if (num % j == 0)
            {
                fl = true;
                break;
            }
        }
    }
    
    if (fl)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (mat[i] > mat[j])
                {
                    int tmp = mat[i];
                    mat[i] = mat[j];
                    mat[j] = tmp;
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++)
        cout << mat[i] << " ";
    
    return 0;
}

// 5 100 35 61 63 17