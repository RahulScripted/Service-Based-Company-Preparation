// Write a program to find Number of digits in an integer



#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int noOfDigit = 0;
    cout<<"The number of digits in "<<num<<" will be : ";
    while(num != 0){
        noOfDigit++;
        num /= 10;
    }
    cout<<noOfDigit<<endl;
}