#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c ,A , B , C;
	cout<<"Enter the first number a"<<endl;
	cin>>a;
	cout<<"Enter the second number b"<<endl;
	cin>>b;
	cout<<"Enter the third number c"<<endl;
	cin>>c;
	A = pow(a,2);
	B = pow(b,2);
	C = pow(c,2);
	if(A == B + C)
	cout<<"Given triangle is right triangle"<<endl;
	else if(B == A + C)
	cout<<"Given triangle is right triangle"<<endl;
	else if (C == A + C)
	cout<<"Given triangle is right triangle"<<endl;
	else
	cout<<"Given triangle is not right triangle"<<endl;
	return 0;
}
