//rotate the given array by k steps ;where k is non negetive 

#include<iostream>
using namespace std;
int main(){
    int arr[5];
     int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<5;i++){
        cout<<"enter elements in array : ";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"Enter k value :"<<endl;
    cin>>k;
 //k can be greater than n 
    k=k%n;
    int j=0;
    int ansarray[5];
    //inserting last k element
    for(int i=n-k;i<n;i++){
        ansarray[j++]=arr[i];
    }

    //insert first (n-k) element 
    for(int i=0;i<=k;i++){
        ansarray[j++]=arr[i];
    }
    cout<<"After rotation : "<<endl;
    for(int i=0;i<n;i++){
        cout<<ansarray[i]<<" ";
    }
    cout<<endl;
}
