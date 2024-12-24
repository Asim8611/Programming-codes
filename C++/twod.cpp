#include<iostream>
using namespace std;
int main()
{
	int arraysizerow,arraysizecolumn;
	cout<<"Enter the size of array's row:"<<endl;
	cin>>arraysizerow;
	cout<<"Enter the size of array's column:"<<endl;
	cin>>arraysizecolumn;
	cout<<"Enter the array's data:"<<endl;
	int array[arraysizerow][arraysizecolumn];
	for(int i=0;i<arraysizerow;i++)
	{
		for(int j=0;j<arraysizecolumn;j++)
		{
			cin>>array[i][j];
		}
	}
		for(int i=0;i<arraysizerow;i++)
	{
		for(int j=0;j<arraysizecolumn;j++)
		{
			cout<<array[i][j]<<"  ";
		}cout<<endl;
	}
	for(int i=0;i<arraysizerow;i++)
	{
		int small = array[i][0];
		for(int j=0;j<arraysizecolumn;j++)
		{
			if(small>array[i][j])
			{
				small = array[i][j];
			}
		}
		cout<<"The smallest number"<<i+1<<"row:"<<small<<endl;
	}
}
