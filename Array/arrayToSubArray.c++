/*Check if we can partition an input array into two subarrays with equal sum> More formally, check
that the prefix sum of a part of the array is equal to the suffix sum of the rest of the array>*/
#include<iostream>
#include<vector>
using namespace std;

bool checkSuffixPreffixSum(vector<int> &v){
    int totalSum=0;
    for(int i=0;i<v.size();i++){
        totalSum+=v[i];
    }

    int prefixSum=0;
    for(int i=0;i<v.size();i++){
        prefixSum+=v[i];
        int suffixSum=totalSum-prefixSum;

        if(suffixSum==prefixSum){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int>v;
    cout<<"Enter no of elements in array ";
    cout<<endl;
    int n;
    cin>>n;

    cout<<"Enter elements in array : "<<endl;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<checkSuffixPreffixSum(v)<<endl;
}