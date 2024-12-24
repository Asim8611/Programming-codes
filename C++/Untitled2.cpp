#include<iostream>
using namespace std;
int main()
{
	int a,*b;
	cout<<"enter the number"<<endl;
	cin>>a;
	b=&a;
	cout<<*b<<endl;
}
