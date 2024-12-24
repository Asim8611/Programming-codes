#include <iostream>

using namespace std;

int main()
 {
    int num = 10;
    double dbl = 3.14;
    int intNum = -5;
    char ch = 'a';

    int* numPtr = &num;
    double* dblPtr = &dbl;
    int* intNumPtr = &intNum;
    char* chPtr = &ch;

    cout << "Variable num: address = " << numPtr << ", value = " << *numPtr << ", memory size = " << sizeof(num) << endl;
    cout << "Variable dbl: address = " << dblPtr << ", value = " << *dblPtr << ", memory size = " << sizeof(dbl) << endl;
    cout << "Variable intNum: address = " << intNumPtr << ", value = " << *intNumPtr << ", memory size = " << sizeof(intNum) << endl;
    cout << "Variable ch: address = " << (void*)chPtr << ", value = " << *chPtr << ", memory size = " << sizeof(ch) << endl;

    return 0;
}
