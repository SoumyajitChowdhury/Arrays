 /*Given an array of integers ‘a’ of size n. For q number of inputs, print the sum of values in a given 
range of indices from l(starting index for the range) to r(ending index for the range),both l and r included in the 
sum. */
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter no of elements in array ";
    cout<<endl;
    int n;
    cin>>n;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    //calculate prifix sum array
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }

    cout<<"Enter quiries : ";
    cout<<endl;
    int q;
    cin>>q;
    while(q--){
        cout<<" enter value of l and r : ";
        int l,r;
        cin>>l>>r;;

        int ans=0;
        //ans = prefixSumArray[r]-prefixsumArray[l-1]
        ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }

}
