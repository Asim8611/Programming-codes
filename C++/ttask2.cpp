#include<iostream>
using namespace std;
int factorial(int& ,int&);
int main()
{
	int input=1,a;
	cout<<"Enter the number of get factorial"<<endl;
	cin>>a;
	factorial(a,input);
	cout<<"The factorial of"<<a<<"is"<<input<<endl;
	return 0;
}
int factorial(int& x,int& y)
{
	for(int i=x;i>=1; i--)
	{
		y*=i;
	}
}
