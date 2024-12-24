#include<iostream>
using namespace std;
int main()
{
int salary;
	cout<<"Enter your salery"<<endl;
	cin>>salary;
	switch(salary/10000)
	{
		case 0:
		cout<<"There will be no deduction in your salary"<<endl;
		break;
		case 1:
		cout<<"There will be a deduction of 1000 from your salary.After dedeuction your salary will be"<<salary-1000<<endl;
		break;
		case 2:
		cout<<"There will be a deduction of 7%. After deduction your salary will be"<<salary*0.07<<endl;			
	}
	return 0;
}
