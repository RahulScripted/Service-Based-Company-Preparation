// Write a program to find Power of a number



#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int num,power;
    cout<<"Enter the base : ";
    cin>>num;
    cout<<"Enter the power : ";
    cin>>power;

    cout<<"Power of "<<num<<" to the power of "<<power<<" : "<<pow(num,power)<<endl;
}