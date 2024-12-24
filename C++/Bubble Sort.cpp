#include <iostream>
using namespace std;
int main(){
	int n = 5;
	int array[n]={425,947,463,901,130};
	for(int  i = 0;i<n-1;i++){
		for(int j = 0;j<n-i-1;j++){
			if(array[j]<array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for(int i = 0 ;i<n;i++){
		cout<<array[i]<<endl;
	}
	return 0;
}
