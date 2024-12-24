#include<iostream>
using namespace std;
int main()
{
	int mul=1,x;
	cout<<"enter the number the table :";
	cin>>x;
	for(int i=1; i<=10; i++)
	{ 
	cout<<x<<"*"<<i<<"=";
	mul=i*x;
	cout<<mul<<endl;
	
	}
	return 0;
}
