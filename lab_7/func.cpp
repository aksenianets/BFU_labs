#include <iostream>

namespace lab
{
    void Read(int mat[100][100], int& n)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                std::cin >> mat[i][j];
    }

    bool SumMinMaxZero(int mat[100][100], int n)
    {
        int min_elem = INT_MAX;
        int max_elem = INT_MIN;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] < min_elem)
                    min_elem = mat[i][j];
                if (mat[i][j] > max_elem)
                    max_elem = mat[i][j];
            }
        }

        return min_elem + max_elem == 0;
    }

    bool EightInNumLine(int mas[100], int& n)
    {
        for (int i = 0; i < n; i++)
        {
            int num = mas[i];
            while (num)
            {
                if (num % 10 == 8)
                    return true;
                num /= 10;
            }
        }
        return false;
    }

    void SortLine(int i, int mat[100][100], int& n)
    {
        for (int j = 0; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (mat[i][j] > mat[i][k])
                        std::swap(mat[i][j], mat[i][k]);
                }
            }
    }

    void Edit(int mat[100][100], int& n)
    {
        for (int i = 0; i < n; i++)
        {
            if (EightInNumLine(mat[i], n))
            {
                SortLine(i, mat, n);
            }
        }
    }

    void Write(int mat[100][100], int& n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
}
