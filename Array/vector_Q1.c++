#include<iostream>
#include<vector>                //Find the last occurance of an element x in the array
using namespace std;

int main(){

    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }

    cout<<"Enter x : ";
    int x;
    cin>>x;

   /*/ int occ=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occ=i;
        }
    }*/
    int occ=-1;
     for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            occ=i;
            break;
        }
    }
    cout<<occ<<endl;
}