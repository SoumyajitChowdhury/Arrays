#include<iostream>
using namespace std;            //sum of the series 1-2+3-4............n
int main(){
    int n;
    cout<<"Enter n value : ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum-=i;
        }
        else{
            sum+=i;
        }
    }
    cout<<sum<<endl;
}