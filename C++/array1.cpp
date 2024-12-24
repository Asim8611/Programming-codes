 #include <iostream>
 using namespace std;
int main()
{
	int array[3][3];
	int smallest;
	cout<<"Enter the array"<<endl;
	for(int r=0;r<3;r++)
	{
		for(int c=0;c<3;c++)
		cin>>array[r][c];
	}
	cout<<"Matrix"<<endl;
	for(int r=0;r<3;r++)
	{
		for(int c=0;c<3;c++)
		{
		cout<<array[r][c]<<"\t";
		}
		cout<<endl;
		}
	for(int col=0;col<3;col++)
	{
		smallest=array[0][col];
		for(int row=0;row<3;row++)
		{
			if(smallest>=array[row][col])
			{
				smallest=array[row][col];
			}
		}
		cout<<"the smallest of the column"<<col+1<<"="<<smallest<<endl;
	}
}
