#include<iostream>
using namespace std;
void numberprint()
{
	int arr[5];
	for (int i=0; i<5;i++)
	{
		cout<<"Enter the number You want to print "<<endl;
		cin>>arr[i];
	}
	for (int i=0; i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	numberprint();
}
