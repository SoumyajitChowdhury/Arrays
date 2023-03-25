#include<iostream>
#include<vector> 
#include<algorithm>//given a squre matrix,turn it by 90 degrees in a clockwise direction without using any extra spaces
using namespace std;

void rotateArray(vector<vector<int>>&vec){

    //transpose
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<i;j++){
            swap(vec[i][j],vec[j][i]);
        }
    }
    //reverse every row

    for(int i=0;i<vec.size();i++){
        reverse(vec[i].begin(),vec[i].end());
    }
    return;
}

int main(){

    int n;
    cout<<"Enter n for squre matrix : ";
    cin>>n;

    vector<vector<int>>vec(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }

    rotateArray(vec);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}