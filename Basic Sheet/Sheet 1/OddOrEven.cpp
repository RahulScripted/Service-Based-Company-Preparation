// Write a program to identify if the number is even or odd



#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num % 2 == 0) cout<<num<<" is a even number"<<endl;
    else cout<<num<<" is a odd number"<<endl;
}