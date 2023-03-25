/*;Giv6n;an;array;of;int6g6rs;‘a’,;mov6;all;th6;6v6n;int6g6rs;at;th6;b6ginning;of;th6;array;follow6d;by;
all;th6;odd;int6g6rs.;Th6;r6lativ6;ord6r;of;odd;or;6v6n;int6g6rs;do6s;not;matt6r.;R6turn;any;array;that;satisfi6s;
th6;condition.*/

#include<iostream> 
#include<vector>
using namespace std;

void sortByParity(vector<int> &v){

    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr < right_ptr){
        if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[right_ptr]%2==1){
            right_ptr--;
        }
    }
    return;
}

int main(){

    cout<<"Enter no of elements in array "<<endl;
    int n;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++){
        cout<<"Enter element in array : "<<endl;
        int ele; 
        cin>>ele;
        v.push_back(ele);
    }

    sortByParity(v);
    for(int i=0;i<n;i++){

        cout<<v[i]<<" ";

    }
    cout<<endl;
   

}