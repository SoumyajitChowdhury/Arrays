#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
     cout<<endl;
    v.push_back(1);
     cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
     cout<<endl;
    v.push_back(2);
     cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    cout<<endl;
    v.push_back(3);
     cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    cout<<endl;
    v.resize(5);
     cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    cout<<endl;
    v.resize(10);
     cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    cout<<endl;
    v.pop_back();
    v.pop_back();
    cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

}
