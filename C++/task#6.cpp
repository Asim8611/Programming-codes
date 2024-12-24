#include<iostream>
using namespace std;
int main()
{
	int year;
	int salary1,salary2,salary3,salary4,salary5;
	salary1=15000;
	salary2=12000;
	salary3=10000;
	salary4=7000;
	salary5=6000;
	char gender, qualification;
	cout<<"Enter the gernder of employ \n M)Male \n F)Female"<<endl;
	cin>>gender;
	cout<<"Enter the year of services"<<endl;
	cin>>year;
	cout<<"Enter the qualification of employ \n P) Postgraduate \n G) graduate"<<endl;
	cin>>qualification;
	if (gender=='m'|| gender=='M')
	{
		if(year>=10 && (qualification=='p'|| qualification=='P'))
		{
			cout<<"Employ salery is"<<salary1<<endl;
		}
		else if(year>=10 && (qualification=='g'|| qualification=='G'))
		{
		cout<<"Employ salery is"<<salary2<<endl;	
		}
		if(year<10 && (qualification=='p'|| qualification=='P'))
		{
			cout<<"Employ salery is"<<salary3<<endl;
		}
		else if(year<10 && (qualification=='g'|| qualification=='G'))
		{
		cout<<"Employ salery is"<<salary4<<endl;	
		}
	}
	if (gender=='f'|| gender=='F')
	{
	if(year>=10 && (qualification=='p'|| qualification=='P'))
		{
			cout<<"Employ salery is"<<salary2<<endl;
		}
		else if(year>=10 && (qualification=='g'|| qualification=='G'))
		{
		cout<<"Employ salery is"<<salary3<<endl;	
		}
		if(year<10 && (qualification=='p'|| qualification=='P'))
		{
			cout<<"Employ salery is"<<salary4<<endl;
		}
		else if(year<10 && (qualification=='g'|| qualification=='G'))
		{
		cout<<"Employ salery is"<<salary5<<endl;	
		}	
		return 0;
	}
}
