#include<iostream>
using namespace std;
int main()
{int ali;
cout<<"Enter ali basic salery"<<endl;
cin>>ali;
cout<<"House rent allowance"<<ali*0.4<<endl;
cout<<"Transport allowance"<<ali*0.2<<endl;
cout<<"Ali gross salery"<<ali-(ali*0.4+ali*0.2)<<endl;
return 0;
}
