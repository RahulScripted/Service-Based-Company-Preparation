// Find the largest number in an array



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

    int maxi = INT_MIN;
    for(int i = 0;i < size;i++){
        if(arr[i] > maxi) maxi = arr[i];
    }
    cout<<endl<<"Largest number is : "<<maxi<<endl;
}