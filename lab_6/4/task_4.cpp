#include <iostream>

using namespace std;

int main()
{
    const int N_MAX = 10'000;
    int mas[N_MAX];
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> mas[i];
    
    int num, tmp;
    int first_digit, last_digit;
    int digits_mul;
    for (int i = 0; i < n; i++)
    {
        num = mas[i];
        tmp = num;

        digits_mul = 1;
        while (tmp > 0)
        {
            first_digit = tmp % 10;
            digits_mul *= tmp % 10;
            tmp /= 10;
        }
        last_digit = num % 10;
        
        cout << first_digit << " " << last_digit << " " << digits_mul << endl;
        if (digits_mul != 180)
        {
            if (first_digit == 1 && last_digit == 1)
            {
                for(int j = n;j>i;j--)
                    mas[j] = mas[j-1];
                i++;
                n++;   
            }
            else
            {
                mas[i] = num;
                i++;
            }
        }
        else
        {
            for(int j = i; j < n - 1; j++)
                mas[j] = mas[j+1];
            i--;
            n--;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    
    return 0;
}