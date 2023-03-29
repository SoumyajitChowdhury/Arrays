#include<iostream>
#include<vector>
using namespace std;

int kedance(int nums[],int n){
    int sum = 0;
    int maxi = nums[0];

    for(int i = 0;i<n;i++){
        sum = sum + nums[i];
        maxi = max(maxi ,sum);

        if(sum < 0){
            sum = 0;
        }
    }

    return maxi;
}
int main(){
    int nums[]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout<<kedance(nums,n)<<endl;
    return 0;
    
}