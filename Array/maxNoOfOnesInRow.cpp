#include<iostream>
#include<vector>  //given a boolen 2D array where each row is sorted.find the row with max no of 1's
using namespace std;    //if we can find leftmost one then its row with maximun number 

/*int leftMostOne(vector<vector<int>>&V){

    int leftMostOne=-1;
    int maxOnesRow=-1;
    //finding leftmost one in 0th row
    int j=V[0].size()-1;
    while(j>= 1 && V[0][j]==1){
        leftMostOne=j;
        maxOnesRow=0;
        j--;
    }
    //check in rest of the rows if we can find a one left of the left most one
    for(int i=0;i<V.size();i++){
        while(j>=0 && v[i][j]==1){
            leftMostOne=j;
            j--;
            maxOnesRow=i;
        }
    }
    return maxOnesRow;
}*/

int maxNoOfOneInRow(vector<vector<int>>&V){

    int maxOnes=INT16_MIN;
    int maxOnesRows=-1;
    int coloumns=V[0].size();

    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[i].size();j++){

            if(V[i][j]==1){
                int numberOfOnes=coloumns - j;
                if(numberOfOnes>maxOnes){
                    maxOnes=numberOfOnes;
                    maxOnesRows=i;
                }
                break;
            }
        }
    }
    return maxOnesRows;
}

int main(){

    int n,m;
    cout<<"Enter no of rows and coloumn : ";
    cin>>n>>m;

    vector<vector<int>>vec(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    int res=maxNoOfOneInRow(vec);
    cout<<res<<endl;
}