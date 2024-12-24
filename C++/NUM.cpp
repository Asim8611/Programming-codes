#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    num1 = 18;
    num1 = num1 + 27;
    num2 = num1;
    num1 = 10;
    num3 = num2 / 5;
    num3 = num3 / 4;
    cout << num1 << " (num1)" << endl;
    cout << num2 << " (num2)" << endl;
    cout << num3 << " (num3)" << endl;
    num1 = num2 = num3;
    cout << num1 << num2 << num3 << endl;
    return 0;
}

