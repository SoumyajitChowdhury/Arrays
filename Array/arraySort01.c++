//sort an array consisting only 0's and 1's
#include<iostream> 
#include<vector>
using namespace std;

void sortZerosAndOnes(vector<int> &v){

    int zeros_count=0;
    for(int ele:v){
        if(ele==0){
            zeros_count++;
        }
    }

    for(int i=0;i<v.size();i++){
        if(i<zeros_count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}

int main(){
    
    cout<<"Enter no of elements in array "<<endl;
    int n;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++){
        cout<<"Enter element in array(only 0's and 1's) : "<<endl;
        int ele; 
        cin>>ele;
        v.push_back(ele);
    }

    sortZerosAndOnes(v);

    for(int i=0;i<n;i++){

        cout<<v[i]<<" ";
    }
    cout<<endl;
   

}