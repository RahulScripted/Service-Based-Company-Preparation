// Write a program to find GCD of two numbers


#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int num1,int num2){
    for(int i = min(num1,num2);i >= 1;i--){
        if(num1 % i == 0 && num2 % i ==0) return i;
    }
    return 1;
}

int main(){
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    
    // Inbuilt Function
    cout<<"GCD of "<<num1<<" and "<<num2<<" will be : "<<__gcd(num1,num2)<<endl;
    
    // User Defined Function
    cout<<"GCD of "<<num1<<" and "<<num2<<" will be : "<<gcd(num1,num2)<<endl;
}