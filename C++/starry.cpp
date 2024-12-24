#include<iostream>
using namespace std;
int main()
{
	int length,i,j;
	cout<<"Enter the length"<<endl;
	cin>>length;
	for (i=1;i <= length; i++)
	{
		for(j=length; j>=1; j--)
		{
			if(i>=j)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
