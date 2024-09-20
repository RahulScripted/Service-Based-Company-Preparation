// Write a program to find Fibonacci series up to n



#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int temp1 = 0,temp2 = 1;
    cout<<temp1<<" "<<temp2<<" ";
    for(int i = 1;i < (num - 1);i++){
        int temp = temp1 + temp2;
        temp1 = temp2;
        temp2 = temp;
        cout<<temp<<" ";
    } 
}