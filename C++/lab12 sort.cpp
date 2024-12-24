#include <iostream>
using namespace std;
void sort(int [], int);
void swap(int,int,int[]);
int main(){
    int n = 5;
    int array[n];
    cout<<"Enter the values for sorting"<<endl;
    for(int i = 0; i<n;i++){
        cin>>array[i];
    }
    sort(array,n);
    cout<<"The sorted array is:"<<endl;
    for(int i = 0; i<n;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}
void sort(int array[],int n){
    for(int i = 0; i<n; i++){
        int min = array[i];
        for(int j = i; j<n; j++){
            if(min>array[j]){
                min = array[j];
                swap(i,j,array);
            }
        }
    }
}
void swap(int i, int j, int array[]){
    int a = array[i];
    array[i] = array[j];
    array[j] = a;
}
