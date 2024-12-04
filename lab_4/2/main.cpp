#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    switch(n)
    {
        case 0:
            cout << "All good!";
            break;
        case 1:
            cout << "ERROR: Read file error";
            break;
        case 2:
            cout << "ERROR: Write file error";
            break;
        case 3:
            cout << "ERROR: Not all fields are defined";
            break;
        default:
            cout << "ERROR: Wrong input";
            break;
    }

    return 0;
}