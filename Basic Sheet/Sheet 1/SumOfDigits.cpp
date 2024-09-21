// Write a program to find Sum of digits of a number



#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter an number : ";
    cin>>num;

    int sum = 0;
    cout<<"Sum of digits of "<<num<<" will be : ";
    while(num){
        sum += (num % 10);
        num /= 10; 
    }
    cout<<sum<<endl;
}