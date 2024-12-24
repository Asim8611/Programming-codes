#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    a = 5;
    b = 2 + (++a);
    cout << a << endl;
    cout << b << endl;
    c = 2 + (a--);
    cout << a << endl;
    cout << c++ << endl;
    cout << c << endl;
    return 0;
}

