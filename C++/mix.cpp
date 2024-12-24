#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    double u = 1.2, v = 3.0;
    string str;

    cout << "2 to the power of 5 = " << pow(2, 5) << endl;
    cout << u << " to the power of " << v << " = " << pow(u, v) << endl;   
    cout << "Square root of 36 = " << sqrt(36) << endl;
    
    str = "C++ code\n";              
    cout << "Length of str = " << str.length() << endl;                  
    return 0;
}

