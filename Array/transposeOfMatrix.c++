#include<iostream>
using namespace std;//W.A.P to give transpose of a matrix given by a user
int main(){

    int n,m;
    cout<<"Enter rows and coloumn : ";
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i] [j];
        }
    }

    int transpose[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           transpose[i][j]=arr[j][i];
        }
    }

    cout<<"Original matrix"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Transpose matrix : "<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    
}