/*Given a vector arr[] sorted in increasing order of n size and an integer x ,
find if there exists a pair in thr array whose sum is exactly x*/
#include<iostream>
using namespace std;
int main(){

    int arr[] = {-2,-1,0,3,6,8,11,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=14;
    int i=0;
    int j=n-1;
    bool found=false;
    //int pair=0;       ->we can also find such total no of pair
    while(i < j){
        if(arr[i]+arr[j] == x){
            //found a pair
            found=false;
            break;
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

    if(found=true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   // cout<<pair<<endl;
}