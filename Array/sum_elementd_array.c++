#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter elements in array : ";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
     cout<<endl<<"sum of all the elements is : "<<sum<<endl;
}