#include <iostream>
#include <vector>
using namespace std;

int main() {
    int Arr[5] = {1, 2, 3, 4, 5}; 
    cout << "Array values: ";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr[i] << " "; 
    }
    cout << endl;
    vector<int> myVector;
    myVector.push_back(6);
    myVector.push_back(7);
    myVector.push_back(8);
    cout << "Vector values: ";
    for (int i = 0; i < myVector.size(); i++) 
	{
        cout << myVector.at(i) << " "; 
    }
    cout << endl;
    return 0;
}
