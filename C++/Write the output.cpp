#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter the first number\n"; 
cin>>a;
cout<<"enter the second number\n";
cin>>b;
if(a>=b) // this condition can also be written as if(a>b || a==b)
cout<<a<<"-"<<b<<"=" <<a-b;
else 
cout<<b<<"-"<<a<<"="<<b-a;
return 0;
}
