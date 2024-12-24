#include<iostream>
using namespace std;
void matrix();
int check();
int main()
{
	matrix();
	return 0;
}
void matrix()
{
	int columns,rows;
	bool check = true;
	cout<<"Enter the number of rows of Matrix:"<<endl;
	cin>>rows;
	cout<<"Enter the number of columns of Matrix:"<<endl;
	cin>>columns;
	int matrix[rows][columns];
	int transpose[columns][rows];
	cout<<"Enter the entries or elements of matrix"<<endl;
	for (int i=1; i <= rows; i++)
	{
		cout<<"Enter the entries of"<<i<<"rows"<<endl;
		for (int j=1; j<=columns; j++)
		{
			cin>>matrix[i][j];
		}
	}
	if (rows== columns)
	{
		for (int i=1; i <= rows; i++)
		{
			for (int j=1; j<=columns; j++)
			{ 
				if (matrix[i][j] != matrix[j][i])
				{
					check = false;
					break;
				}
				else
				{
					continue;
				}
			}
		}		
	
		if (check==1)
		{
			cout<<"The above matrix is symmetric matrix"<<endl;
		}
		if (check==0)
		{
			cout<<"The above matrix is not a symmetric matrix"<<endl;	
		}
	}
	else
	{
		cout<<"The transpose of above matrix is not possible"<<endl;
	}
}
