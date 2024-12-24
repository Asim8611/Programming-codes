#include<iostream>
using namespace std;
int main()
{
	int arr[3][3];
	int smallest;
	cout<<"Enter the array"<<endl;
	for (int r=0;r<=3;r++)
	{
		for(int c=0;c<=3;c++)
		{
			cout<<arr[r][c];
		}
		cout<<"Matrix"<<endl;
	}
	for (int r=0;r<=3;r++)
	{
		for(int c=0;c<=3;c++)
		cout<<arr[r][c]<<"\t"<<endl;		
	}
	for (int column=0;column<3;column++){
		smallest=arr[column][0];
		for(int row=0; row<3; row++)
		{
		if(smallest>=arr[column][row])
		{
		smallest=arr[column][row];
		}
		cout<<"The smallest of the column:"<<column+1<<":"<<smallest<<endl;
		}
	}
			
	
}
