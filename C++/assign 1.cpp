#include<iostream>
using namespace std;
int fibonacci();
int main()
{
	fibonacci();
	return 0;
}
int fibonacci()
{
	int first=0, last=1,term;
	int number;
	cout<<"Enter the number for the fibonacci series upto that number "<<endl;
	cin>>number;
	if(number==1)
	{
		cout<<"The"<<number<<"Term of fibonacci series is 0"<<endl;
	}
	else if(number==2)
	{
		cout<<"The"<<number<<"Term of fibonacci series is 1"<<endl;
	}
	else
	{
		for(int i=1;i<=number;i++)
		{
			if(i==1)
			{
				continue;
			}
			if(i==2)
			{
				continue;
			}
			term=first + last;
			first=last;
			last=term;
		}
		cout<<"The"<<number<<"Term of fibonacci series is"<<term<<endl;
		return term;
	}
}
