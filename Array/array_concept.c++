#include<iostream>
using namespace std;
int main(){
    int arr[]={21,25,56,32,97};
    //cout<<sizeof(arr)<<endl;
    //cout<<"Length of array is "<<sizeof(arr)/sizeof(arr[0])<<endl;
    int size=sizeof(arr)/sizeof(arr[0]);

    //using for loop
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //usinf for-each loop
    for(int element:arr){
        cout<<element<<" ";
    }
}