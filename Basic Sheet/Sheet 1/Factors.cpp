// Write a program to find the Factors of a number



#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    cout<<"Factors of "<<num<<" will be : ";
    for(int i = 1;i <= num;i++){
        if(num % i == 0) cout<<i<<" ";
    }
}