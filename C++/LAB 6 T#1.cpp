#include<iostream>
using namespace std;
int main()
{
	int num,square,cube;
	for(num=0; num<=9; num++)
	{
		square = num*num;
		cube = num*num*num;
		cout<<num<<"        "<<square<<"    	    "<<cube<<endl;
	}
}
