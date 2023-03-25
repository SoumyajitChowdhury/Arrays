#include<iostream>
using namespace std;
int main(){

    int arr[]={1,2,1,2,1,2};
    int ansSum=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            ansSum+=arr[i];
        }
        else{
            ansSum-=arr[i];
        }
    }
    cout<<ansSum<<endl;
}