/*Given a matrix ‘a’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
rectangle from (l1,r1) to (l2, r2).*/
//approach-2->using prefix sum concept 
#include<iostream>
#include<vector>
using namespace std;
int rectangleSum(vector<vector<int>>& matrix, int l1,int r1,int l2,int r2){
    int sum=0;
    for(int i=0;i<matrix.size();i++){
        for(int j=1;j<matrix[0].size();j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }

    for(int i=l1;i<=l2;i++){
        if(r1!=0){
            sum+=(matrix[i][r2]- matrix[i][r1-1]);
        }
        else{
            sum+=matrix[i][r2];
        }
    }
    return sum;
}
int main(){
    int n,m;
    cout<<"Enter rows and coloumn for matrix : "<<endl;
    cin>>n>>m;
    cout<<"Enter elements in matrix: "<<endl;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    int l1,r1,l2,r2;
    cout<<"Enter l1 and r1: "<<endl;
    cin>>l1>>r1;
    cout<<"Enter l2 and r2: "<<endl;
    cin>>l2>>r2;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int sum = rectangleSum(matrix,l1,r1,l2,r2);
    cout<<"sum of rectangle is : "<<sum<<endl;

    return 0;
}