#include <iostream>
 
int main()
{
    int num, i;
    std::cin >> num >> i; 
    
    std::cout << ((num >> (i - 1)) & 1u);

} 