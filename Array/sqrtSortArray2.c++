#include<iostream> 
#include<math.h>
using namespace std;

void squreSortedArray(int arr[],int n){
    int left=0;
    int right=n-1;
    int newArr[n];
    int i=n-1;
    while(left <= right and i>=0){
        if(abs(arr[left]) > abs(arr[right])){
            newArr[i] = (arr[left]*arr[left]);
            left++;
            i--;
            
        }
        else{
            newArr[i]= (arr[right]*arr[right]);
            right--;
            i--;
            
        }
    }
    for(int i = 0;i<n;i++){
        cout<<newArr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter size of array you want : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    squreSortedArray(arr,n);
}
