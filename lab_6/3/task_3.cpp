#include <iostream>

using namespace std;

int main()
{
    const int N_MAX = 100;
    const int M_MAX = 100;

    int mat[N_MAX][M_MAX];

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
	    for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    }
		
    int even_cnt[N_MAX] = {};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] % 2 == 0)
                even_cnt[i]++;
        }
    }

    int min_even_line = 101;
    for (int i = 0; i < n; i++)
    {
        if (even_cnt[i] != 0 && even_cnt[i] < min_even_line)
            min_even_line = i;

    }

    if (min_even_line != 101)
        for (int j = 0; j < m; j++)
        {
            mat[min_even_line][j] = mat[min_even_line][j] * mat[min_even_line][j];
        }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}