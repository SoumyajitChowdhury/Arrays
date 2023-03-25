#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    bool sortedFlag=true;
    for(int i=1;i<6;i++){
        if(arr[i]<=arr[i-1]){
            sortedFlag=false;
        }
    }
    cout<<sortedFlag<<endl;
}