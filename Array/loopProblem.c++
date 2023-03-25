#include<iostream>
using namespace std;            //first multiple of 5 which is also divisial by 7
int main()
{
   /* int i=5;
    while(true){
        if(i%7==0){
            cout<<i<<endl;
            break;                    //usinng while loop
        }
        i=i+5;
    }*/

    for(int i=5;;i+=5){
        if(i%7==0){
            cout<<i<<endl;           //using for loop
            break;
        }
        
    
    }
}