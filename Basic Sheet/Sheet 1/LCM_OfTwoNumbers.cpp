// Write a program to find LCM of two numbers



#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;

    int LCM_Of2Number = __gcd(num1,num2) * (num1 / __gcd(num1,num2)) * (num2 / __gcd(num1,num2));
    
    cout<<"LCM of "<<num1<<" and "<<num2<<" will be : "<<LCM_Of2Number<<endl;
}