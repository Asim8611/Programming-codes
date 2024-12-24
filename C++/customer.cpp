#include<iostream>
using namespace std;
const double rprocessFee=4.50;
const double rbasicFee=20.50;
const double rchannelFee=7.50;
const double bprocessfee=15.00;
const double bbasicfee=75.00;
const double bchannelfee=50;
const double bextchannelfee=5.00;
int main()
{char type;
double canumber,ccode,noofchannels,bill;
cout<<"Billing system"<<endl;
cout<<"Choose customer type"<<endl;
cout<<"A) Residential customer"<<endl;
cout<<"B) Business customer"<<endl;
cin>>type;
if(type=='A'|| type=='a'){
	cout<<"Enter your account number"<<endl;
	cin>>canumber;
	cout<<"Enter your customer code"<<endl;
	cin>>ccode;
	cout<<"Enter the number of channel"<<endl;
	cin>>noofchannels;
	bill = rprocessFee + rbasicFee + rchannelFee * noofchannels;
	cout<<endl;
	cout<<"Your customer type is Residential customer"<<endl;
	cout<<"your account no is"<<canumber<<endl;
	cout<<"your bill with "<<noofchannels<<" no of channel is "<<bill<<endl;
}
else if(type == 'B' || type =='b'){
		cout<<"enter your account number"<<endl;
		cin>>canumber;
		cout<<"enter customer code"<<endl;
		cin>>ccode;
		cout<<"no of channel want to purchase"<<endl;
		cin>>noofchannels;
		if(noofchannels <= 10){
			bill=bprocessfee+bbasicfee+bchannelfee*noofchannels;
			cout<<endl;
			cout<<"your customer type is Business customer"<<endl;
			cout<<"your account number is"<<canumber<<endl;
			cout<<"your bill with "<<noofchannels<<" no of channels is "<<bill<<endl;				
		}
	}
return 0;
}
