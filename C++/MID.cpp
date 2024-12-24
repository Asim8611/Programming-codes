#include<iostream>
using namespace std;
int main()
{
	int basicsalery,houseallowance,grosssalery;
	cout<<"Enter the basic salery"<<endl;
	cin>>basicsalery;
	if(basicsalery<=10000)
	{
		houseallowance=0.2*basicsalery;
		cout<<"Your house allowance is="<<houseallowance<<endl;
	}else if(basicsalery<=20000)
	{
		houseallowance=0.25*basicsalery;
		cout<<"Your house allowance is="<<houseallowance<<endl;	
	}else if(basicsalery>20000)
	{
		houseallowance=0.3*basicsalery;
		cout<<"Your house allowance is="<<houseallowance<<endl;	
	}
	grosssalery=houseallowance+basicsalery;
	cout<<"Your gross salery is="<<	grosssalery<<endl;
}
