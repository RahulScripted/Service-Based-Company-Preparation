// Count frequency of each element in an array



#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    vector<int>arr(size);
    cout<<"Give input : ";
    for(int i = 0;i < size;i++) cin>>arr[i];

    unordered_map<int,int>mp;
    for(int i = 0;i < size;i++) mp[arr[i]]++;

    for(auto ans : mp){
        cout<<ans.first<<" -> "<<ans.second<<endl;
    }
}