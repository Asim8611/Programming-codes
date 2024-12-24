#include<iostream>
using namespace std;
int getmarks(void);
int getgrace(int, int);
int main()
{
	getmarks();
	return 0;

}
int getmarks(void)
{
	int division,subject;
	cout<<"Enter your division"<<endl;
	cin>>division;
	cout<<"Enter the number of subjects you failed"<<endl;
	cin>>subject;
	getgrace(division, subject);
}
int getgrace(int division,int subject)
{

	if(division==1)
	{
		if(subject>3)
		{
			cout<<"No grace marks will awarded"<<endl;
		}
		else if(subject<=3)
		{
			cout<<"5 marks will be awarded"<<endl;
		}
	}
else if(division==2)
{
	if(subject>2)
		{
			cout<<"No grace marks will awarded"<<endl;
		}
		else if(subject<=2)
		{
			cout<<"4 marks will be awarded"<<endl;
		}	
}
if(division==3)
	{
		if(subject>1)
		{
			cout<<"No grace marks will awarded"<<endl;
		}
		else if(subject<=1)
		{
			cout<<"5 marks will be awarded"<<endl;
		}
		else
		cout<<"Invalid information"<<endl;
	}
	
}
