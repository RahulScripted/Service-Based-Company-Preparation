// Write a program to find Sum of N natural numbers



#include<iostream>
using namespace std;

int main(){
    int end_point;
    cout<<"Enter the end point of the range : ";
    cin>>end_point;

    int sum = 0;
    for(int i = 0;i <= end_point;i++) sum += i;
    cout<<"Sum of 1 to "<<end_point<<" will be : "<<sum<<endl;
}