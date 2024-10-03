#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "type" << "         " << "size" << "    " << "range" << endl;

    int siChar = pow(2, sizeof(signed char) * 8 - 1);
    int unSiChar = pow(2, sizeof(unsigned char) * 8 - 1);
    cout << "signed char" << "  " << sizeof(signed char) << "       " << siChar << " - " << siChar - 1 << endl;
    cout << "unsigned char" << "  " << sizeof(unsigned char) << "       " << siChar << " - " << siChar - 1 << endl;

    int siInt = pow(2, sizeof(signed int) * 8 - 1);
    cout << "int " << "    " << sizeof(signed int) << "       " << siInt << " - " << siInt - 1 << endl;

    int deDouble = pow(2, sizeof(double) * 8 - 1);
    cout << "double" << "  " << sizeof(double) << "       " << deDouble << " - " << deDouble - 1 << endl;
    
    return 0;
}