#include <iostream>
#include "func.hpp"

int main()
{
    const int N_MAX = 100;
    int mat[N_MAX][N_MAX];

    int n;
    std::cin >> n;

    lab::Read(mat, n);
    if (lab::SumMinMaxZero(mat, n))
    {
        lab::Edit(mat, n);
    }
    lab::Write(mat, n);

    return 0;
}