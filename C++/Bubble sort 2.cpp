#include<iostream>
using namespace std;
int main(){
	int n=4;
	int arr[n]={456,654,234,865};
	cout<<"The sorted array is:"<<endl;
	for(int i = 0; i<n-1;i++)
	{
		for(int j = 0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
