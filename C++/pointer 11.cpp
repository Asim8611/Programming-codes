#include<iostream>
using namespace std;
void IndirectSwap(char& y, char& z)
{
	char temp = y;
	y = z;
	z = temp;
}
int main( )
{
	char a = 'y';
	char b = 'n';
	IndirectSwap(a, b);
	cout << a << b << endl;
	return 0;
}

