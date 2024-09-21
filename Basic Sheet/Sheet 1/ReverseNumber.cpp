// Write a program to reverse a given number



#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int reverse = 0;
    cout<<"Reverse of "<<num<<" will be : ";
    while(num){
        int digit = (num % 10);
        reverse = (reverse * 10) + digit;
        num /= 10;
    }
    cout<<reverse<<endl;
}