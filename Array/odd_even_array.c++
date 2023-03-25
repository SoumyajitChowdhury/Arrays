#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int evenCount=0;
    int oddCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            evenCount+=1;
        }
        else{
            oddCount+=1;
        }
    }
    cout<<"Total odd number in the arrray : "<<oddCount<<endl;
    cout<<"Total even number in the arrray : "<<evenCount<<endl;

}