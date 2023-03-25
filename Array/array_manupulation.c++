//find uniqe number in a given array where all the numbers are being reptated twice with one value  
//being unique
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,1,4,3,2,1,7};
    int size=sizeof(arr)/sizeof(arr[0]); 
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout<<"unique element is : "<<arr[i]<<endl;
        }
    }
}