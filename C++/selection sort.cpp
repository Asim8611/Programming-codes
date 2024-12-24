#include<iostream>
using namespace std;
int main()
{
	int n = 7;
	int arr[n] = { 857,987,467,638,953,456,765};
	cout<<"The sorted array is:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
