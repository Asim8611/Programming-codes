#include<iostream>
using namespace std;
int linearsearch(int[],int);
int main()
{
	int arr[5]={10,250,568,321,945},value;
	cout<<"Enter the number you want to search"<<endl;
	cin>>value;
	linearsearch(arr,value);
	return 0;
}
int linearsearch(int arr[],int value )
{
	for(int i=0;i<5;i++)
	{
		if(arr[i]==value)
		{
			cout<<"Yes it is our record"<<endl;
			return 0;
		}
	}
	cout<<"No it is not our record"<<endl;
	return 0;	
}
