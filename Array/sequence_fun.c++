#include<iostream>
using namespace std;

int sequence(int n){
    int squ=n*n;
    return squ;
}

int main(){
    for(int i=1 ;i<=5;i++){
        cout<<sequence(i)<<" ";
    }
}