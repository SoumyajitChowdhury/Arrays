#include<iostream>
using namespace std;
int main(){                             

    int arr[]={4,3,6,7,1};
    int targetSum=7;                            //find total no of pair in an array 
    int size=sizeof(arr)/sizeof(arr[0]);        //array whose sum is eu=qual to a given no x

    int pair=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==targetSum){
                pair++;
            }
        }
    }
    cout<<"Total such pairs are "<<pair<<endl;
}