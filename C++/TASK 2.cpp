#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	a=5;
	b=6;
	cout<<"operation 1 answer\n";
	a = (b++) + 3;
	cout<<"value of a="<<a<<"\n";
	cout<<"value of b="<<b<<"\n";
	cout<<"value of c="<<c<<"\n";
	cout<<"operation 2 answer\n";
	c = 2 * a + (++b);
	cout<<"value of a="<<a<<"\n";
	cout<<"value of b="<<b<<"\n";
	cout<<"value of c="<<c<<"\n";
	cout<<"operation 3 answer\n";
	b = 2* (++c) - (a++);
		cout<<"value of a="<<a<<"\n";
	cout<<"value of b="<<b<<"\n";
	cout<<"value of c="<<c<<"\n";
	return 0;
}
