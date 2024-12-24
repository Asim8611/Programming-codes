#include<iostream>
using namespace std;
int main()
{
char gender, status;
int age;
cout<<"Enter marital status \n A) married \n B) unmarried)"<<endl;
cin>>status;
if (status=='a' || status=='A')
		cout<<"Driver is insured"<<endl;
	if (status=='B' || status=='b')
	{
	cout<<"Enter the gender of driver \n M) Male \n F) Female"<<endl;
	cin>>gender;
		if (gender=='M'|| gender=='m')
		{cout<<"Enter the age of driver"<<endl;
		cin>>age;
			if(age>=30)
		cout<<"Driver is insured"<<endl;
				if (age<30)
				cout<<"Driver is not insured"<<endl;
		}
		if (gender=='f' || gender=='F')
		{
		cout<<"Enter the age of driver"<<endl;
		cin>>age;
			if (age>=25)
			cout<<"Driver is insured"<<endl;
				if (age<25)
				cout<<"Driver is not insured"<<endl;
			}
		}
	
	return 0;
}
