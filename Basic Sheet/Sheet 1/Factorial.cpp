// Write a program to find Factorial of a number



#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    long long fact = 1;
    for(int i = 1;i <= num;i++) fact *= i;
    cout<<"Factorial of "<<num<<" will be : "<<fact<<endl;
}