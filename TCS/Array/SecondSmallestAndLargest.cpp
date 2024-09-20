// Second Smallest and Second Largest element in an array



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

    int mini = INT_MAX,secondMini = INT_MAX;
    int maxi = INT_MIN,secondMaxi = INT_MIN;
    for(int i = 0;i < size;i++){
        if(arr[i] < mini){
            secondMini = mini;
            mini = arr[i];
        }
        else if(arr[i] < secondMini && arr[i] != mini){
            secondMini = arr[i];
        }
        if(arr[i] > maxi){
            secondMaxi = maxi;
            maxi = arr[i];
        }
        else if(arr[i] > secondMaxi && arr[i] != maxi){
            secondMaxi = arr[i];
        }
    }
    cout<<endl<<"Second smallest number is : "<<secondMini<<" & second largest number is : "<<secondMaxi<<endl;
}