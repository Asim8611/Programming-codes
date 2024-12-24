#include<iostream>
using namespace std;
int main()
{
	int guest, chair,n;
	n=1;
	cout<<"Enter the number of guests"<<endl;
	cin>>guest;
	cout<<"Enter the number of chairs"<<endl;
	cin>>chair;
	for (int i=guest ; i>(guest-chair); i--)
		n*=i;
		cout<<"The possible arrangement is"<<endl;
		cout<<n;
		return 0;
}
