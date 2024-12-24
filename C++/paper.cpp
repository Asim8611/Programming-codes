#include<iostream>
using namespace std;
int findlargest();
int main()
{
	int arr[7] = {645,987,678,923,765,647,847};
	cout<<"The largest number is:"<<endl;
	for(int i = 0; i < 6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			cout<<arr[i];
		}
	}
	findlargest();
}
findlargest()
	{
		for(int i = 0; i < 6; i++)
			{
				for(int j = 0; j < 6; j++)
				{
					int arr[i];
					if(arr[i]>arr[j])
					{
						cout<<"The largest number is:"<<endl;
					}
					else
					{
						cout<<endl;
					}
				}
			}
	}
