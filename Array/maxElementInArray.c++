#include<iostream>
using namespace std;
int main(){
    int arr[]={21,25,56,32,97};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest element in the array is : "<<max;
}