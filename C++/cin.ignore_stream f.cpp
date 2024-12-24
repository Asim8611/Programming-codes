#include<iostream>
#include<string>
using namespace std;
int main()
{
char ch1;
string str;

cin >> ch1;
cin.ignore(4, '.');
cin >> str;                  
cout<<ch1<<str;
}
