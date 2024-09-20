// Rearrange array in increasing-decreasing order



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>&arr){
    int n = arr.size();
    for(int i = 0;i < n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    vector<int>arr(size);
    cout<<"Give input : ";
    for(int i = 0;i < size;i++) cin>>arr[i];
    cout<<"Our array : ";
    display(arr);

    sort(arr.begin(),arr.end());
    cout<<"After setting our array increasing-decreasing order : ";
    for(int i = 0;i < size / 2;i++) cout<<arr[i]<<" ";
    for(int i = (size - 1);i >= size / 2;i--) cout<<arr[i]<<" ";
}