#include<iostream>
using namespace std;
int main()
{
	int salery,years,bonus,sale,additionalbonus,paycheck;
	cout<<"Enter the basic salery"<<endl;
	cin>>salery;
	cout<<"Enter the no of service years"<<endl;
	cin>>years;
	if(  years <=5)
	{
			bonus=10*years;
		cout<<"Bonus is="<<bonus<<endl;
		}
	else if( years > 5)
	{
			bonus=20*years;
		cout<<"Bonus is="<<bonus<<endl;
	}
	cout<<"Enter your sale"<<endl;
	cin>>sale;
	if(sale <5000){
		cout<<"Additional bonus =0"<<endl;
	}
	else if(sale>=5000 && sale<10000)
	{
		additionalbonus = sale * (0.03);
		cout<<"Additional Bonus is="<<bonus<<endl;
	}
		else if(sale>10000)
	{
		additionalbonus = sale *(0.06);
		cout<<"Additional Bonus is="<<bonus<<endl;
	}
	paycheck=salery+bonus+additionalbonus;
	cout<<"Your paycheck is:"<<paycheck<<endl;
}
