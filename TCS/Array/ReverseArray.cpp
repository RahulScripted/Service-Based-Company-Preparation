// Reverse a given array



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

    // Inbuilt reverse
    // reverse(arr.begin(),arr.end());
    // cout<<"Reverse array : ";
    // display(arr);

    // create reverse function
    int i = 0,j = (size - 1);
    while(i < j) swap(arr[i++],arr[j--]);
    cout<<"Reverse array : ";
    display(arr);
}