#include<iostream>
using namespace std;
string linear()
{
	string arr[4]={"Ahmad","Noman","Sufyan","Huzaifa"};
	string a;
		cout<<"Enter the name you want to search:"<<endl;
		cin>>a;
	for (int i=0;i<4;i++)
	{
		if(a==arr[i])
		{
			cout<<"the search data is available";
			return a;
		}
	}
	cout<<"invalid input";
}
int main()
{
	linear();	
}
