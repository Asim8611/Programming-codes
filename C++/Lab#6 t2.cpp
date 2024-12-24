#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"enter your grade"<<endl;
	cin>>grade;
	switch (grade)
	{
		case('A'):
			cout<<"Excellent";
			break;
		case('B'):
			cout<<"Good";
			break;
		case('C'):
			cout<<"poor";
			break;
		case('D'):
			cout<<"very poor";
			break;
		case('F'):
			cout<<"Fail";
			break;
	default:
		cout<<"you entered the wrong information"<<endl;
	}
}
