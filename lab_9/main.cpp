#include <iostream>
#include <iomanip>
 
int main()
{
    int num;
    std::cin >> num;
 
    unsigned char * p = (unsigned char *) &num;
    
    for (int i = 0; i < sizeof(num); i++)
    {
        int t = *(p + i);
        std::cout << std::hex << std::setfill('0') << std::setw(2) << t << " ";
    }
    
    return 0;
}