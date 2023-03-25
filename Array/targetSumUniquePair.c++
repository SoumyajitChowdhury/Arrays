/*Given a vector arr[] sorted in increasing order of n size and an integer x ,
find total number of unique pair in thr array whose sum is exactly x*/
#include<iostream>
using namespace std;
int main(){

    int arr[] = {-2,-1,0,1,3,4,6,8,11,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=12;
    int i=0;
    int j=n-1;
    int unique_pair=0;
    while(i < j){
        if(arr[i]+arr[j] == x){
            //found a pair
            unique_pair+=1;
            i++;
            j--;
            
        }
        else if(arr[i]+arr[j] < x){
            //sum is less than x ;then increase i
            i++;
        }
        else{
            //sum is greater than x; then decrease j
            j--;
        }
        //pair+=1;
    }

   cout<<"Total unique pairs are : "<<unique_pair;
}