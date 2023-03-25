/*Given a vector arr[] sorted increasing order of size n and an integer x;
find if exist a pair in thr array whose absolute differnce is exactly x*/
#include<iostream>
using namespace std;
int main(){

    int arr[]={5,10,15,20,26};
    int n = 5;
    int x = 10;

    //code to check whether there is any pair with the absolute diffrence

    int i=0;
    int j=1;
    bool found = false;
    while(i < n and j < n){
        if(abs(arr[i] - arr[j]) == x){
            found = true;
            break;
        }
        else if(abs(arr[i] - arr[j] < x)){
            j++;
        }
        else{
            i++;
        }
    }
    if(found=true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}