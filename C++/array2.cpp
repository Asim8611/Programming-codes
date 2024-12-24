#include<iostream>
using namespace std;
int avg_1(int[], int);
void display(int&,char&);
int main()
{
	int marks[5], average;
	char grade;
	for(int i=0;i<=4;i++)
    {
		cout<<"Enter "<<i<<" Marks";
		cin>>marks[i];		
	}
    average=avg_1(marks,5);
    if(average<=100&&average>80)
    {grade='A';}
    else if(average<80&&average<70)
    {grade='B';}
    else if(average<70)
    {grade='C';}

    display(average,grade);
}
int avg_1(int marks[],int b)
{
	int c, sum;
	for(int i=0;i<b;i++)
    {
      sum=sum+marks[i];
		              }	
	c=sum/5;
	return c;
	
}
void display(int& average,char& grade)
{
	cout<<endl<<"The average is: "<<average<<" With Grade"<<grade;
}
