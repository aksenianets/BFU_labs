#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N_MAX = 2000;
    int mat[N_MAX];
    
    int n;
    cin >> n;
    
    int max_num = -1;
    int max_num_i = -1;
    int all_mul = 1;
    
    for (int i = 0; i < n; i++)
    {
        int num, temp;
        cin >> num;
        temp = num;
        
        if ((num % 10) == 2)
        {
            all_mul *= num;
            if (num > max_num)
                {
                    max_num = num;
                    max_num_i = i;
                }
        }
    }   

    if (all_mul == 1)
        cout << "Искомых чисел не найдено"
    else
        cout << "Произведение: " << all_mul << "\n" << "Макс число и его номер: " << max_num << ", " << max_num_i + 1;

    return 0;
}

// 5 157 896 352 12 10