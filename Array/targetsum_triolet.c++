#include<iostream>
using namespace std;
int main(){                             

    int arr[]={3,1,2,4,0,6};
    int targetSum=5;                            //find total no of triplet in an array 
    int size=sizeof(arr)/sizeof(arr[0]);        //array whose sum is eu=qual to a given no x

    int triplet=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                 if(arr[i]+arr[j]+arr[k]==targetSum){
                triplet++;
            }
            }
        }
    }
    cout<<"Total such triplets are "<<triplet<<endl;
}