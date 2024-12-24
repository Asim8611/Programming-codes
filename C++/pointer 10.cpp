#include<iostream>
using namespace std;
void IndirectSwap(char *Ptr1, char *Ptr2)
{
	char temp = *Ptr1;
	*Ptr1 = *Ptr2;
	*Ptr2 = temp;
}
int main()
{
	char a = 'y';
	char b = 'n';
	IndirectSwap(&a, &b);
	cout << a << b << endl;
	return 0;
}
