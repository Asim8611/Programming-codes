#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the first number a"<<endl;
	cin>>a;
	cout<<"Enter the second number b"<<endl;
	cin>>b;
	cout<<"Enter the third number c"<<endl;
	cin>>c;
	if(c*c==a*a+b*b)
	{
		cout<<"Given triangle is right triangle"<<endl;
	}
		else 
		cout<<"Given triangle is not a right triangle"<<endl;
	return 0;
}
