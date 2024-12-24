#include<iostream>
using namespace std;
int main()
{
	int m = 10;
	int &j = m;  // j is a reference variable
	cout << "value of m = " << m << endl; 
	                  //print 10
	j = 18;
	cout << "value of m = " << m << endl; 
	     // print 18
}
