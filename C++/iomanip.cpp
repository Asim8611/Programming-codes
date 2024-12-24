#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 0.123456789, y = 123.45, z = 9999.9999;
    cout << "before formatting: " 
         << x << " " << y << " " << z << endl;    
    cout << showpoint << "after showpoint: " 
         << x << " " << y << " " << z << endl;
    cout << fixed << "after fixed: " 
         << x << " " << y << " " << z << endl;    
    cout << setprecision(2) << "after setprecision(2): " 
         << x << " " << y << " " << z << endl;
    cout << scientific << "after scientific: " 
         << x << " " << y << " " << z << endl;    
    return 0;
}

