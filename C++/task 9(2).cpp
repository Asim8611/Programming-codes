#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int index = 5;
	int array1[index] = {34,70,56,33,89};
	int array2[index] = {};
	cout<<setw(8)<<"Array1"<<setw(8)<<"Array2"<<endl;
	for(int i=0, j= index-1,  k=0; k<index; i< index , j>=0, i++, j-- ,k++)
	{
		array2[i] = array1[j];
	
		cout<<setw(8)<<array1[k]<<setw(8)<<array2[k]<<endl;
	}
	return 0;
}

