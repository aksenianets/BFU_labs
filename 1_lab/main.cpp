#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "type                 " << "size    " << "range" << endl;

    cout << "signed char          " << sizeof(signed char) << "       " << SCHAR_MIN << " - " << SCHAR_MAX << endl;
    cout << "unsigned char        " << sizeof(unsigned char) << "       " << 0 << " - " << UCHAR_MAX << endl;

    cout << "signed short int     " << sizeof(short int) << "       " << SHRT_MIN	<< " - " << SHRT_MAX << endl;
    cout << "unsigned short int   " << sizeof(unsigned short int) << "       " << 0 << " - " << USHRT_MAX << endl;
    
    cout << "signed int           " << sizeof(signed int) << "       " << INT_MIN << " - " << INT_MAX << endl;
    cout << "unsigned int         " << sizeof(unsigned int) << "       " << 0 << " - " << UINT_MAX << endl;
    
    cout << "signed long int      " << sizeof(signed long int) << "       " << LONG_MIN << " - " << LONG_MAX << endl;
    cout << "unsigned long int    " << sizeof(unsigned long int) << "       " << 0 << " - " << ULONG_MAX << endl;
    
    cout << "signed long long     " << sizeof(signed long long) << "       " << LLONG_MIN << " - " << LLONG_MAX << endl;
    cout << "unsigned long long   " << sizeof(unsigned long long) << "       " << 0 << " - " << ULLONG_MAX << endl;

    cout << "bool                 " << sizeof(bool) << "       " << 0 << " / " << 1 << endl;

    cout << "float                " << sizeof(float) << "       " << FLT_MIN << " - " << FLT_MAX << endl;
    cout << "double               " << sizeof(double) << "       " << DBL_MIN << " - " << DBL_MAX << endl;
    cout << "long double          " << sizeof(long double) << "       " << LDBL_MIN << " - " << LDBL_MAX << endl;

    cout << "\nExemples:" << endl;

    char c = 65;
    cout << "char " << c << " " << char(c + 1) << endl;

    // для переменных типов short, int, long операции будут выполнятся одинаково
    long long l1 = 125'452'789'463;
    long long l2 = 124'896'542'142;
    cout << "long long " << l1 + l2 << endl;

    // если выйти за пределы значений переменной, то она применет своё минимальное/максимальное 
    short s1 = 32767;
    short s2 = -32768;
    cout << "unsigned short " << s1 << " " << short(s1 + 1) << endl;
    cout << "unsigned short " << s2 << " " << short(s2 - 1) << endl;

    double d1 = 4.56;
    double d2 = 4552.635657;
    cout << "double " << d1 + d2 << endl;

    bool b1 = 1;
    bool b2 = false;
    cout << "bool " << b1 || b2;

    return 0;
}