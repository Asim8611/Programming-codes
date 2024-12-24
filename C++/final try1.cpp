#include<iostream>
using namespace std;
bool linearsearch(int arr[],int value);
int main()
{
	int value[5]={10,3,4,5,2};
	int a;
	cout<<"Enter the number to search"<<endl;
	cin>>a;
	bool flag=linearsearch(value,a);
	if (flag==1)
	{
		cout<<"Yes this Number is available"<<endl;
	}
	else
	{
		cout<<"Invalid Data"<<endl;
	}
	return 0;
}
	bool linearsearch(int arr[], int a)
	{
		for(int i=0;i<5;i++)
		{
			if(arr[i]==a)
			{
				return true;
			}
		}
		return false;
	}
