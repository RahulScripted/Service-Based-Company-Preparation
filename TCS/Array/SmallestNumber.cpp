// Find the smallest number in an array



#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    vector<int>arr(size);
    cout<<"Give input : ";
    for(int i = 0;i < size;i++) cin>>arr[i];

    cout<<"Array : ";
    for(int i = 0;i < size;i++) cout<<arr[i]<<" ";

    int mini = INT_MAX;
    for(int i = 0;i < size;i++){
        if(arr[i] < mini) mini = arr[i];
    }
    cout<<endl<<"Smallest number is : "<<mini<<endl;
}