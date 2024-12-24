#include<iostream>
using namespace std;
int main(){
	 int a, b, c;
	 
	 cout<<"Enter the first number"<<endl;
	 cin>>a;
	 cout<<"Enter the second number"<<endl;
	 cin>>b;
	 cout<<"Enter the third number"<<endl;
	 cin>>c;
	 if(a>b &&a>c){
	 	cout<<"A is larger number"<<endl;
	 }
	 else if(b>c &&b>a){
	 	cout<<"B is larger number"<<endl;
	 }
	 else if(c>a&&c>b){
	 	cout<<"C is larger number"<<endl;
	 }
	 else if(a=b=c){
	 	cout<<"All are equal"<<endl;
	 }
	 	
	 return 0;
	 }
	 
