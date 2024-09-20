// Convert a decimal number to a binary number.



#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a decimal number : ";
    cin>>num;
    int binary = 0,base = 1;
    while(num > 0){
        int digit = (num % 2);
        binary += digit * base;
        base *= 10;
        num /= 2;
    }
    cout<<"In binary value : "<<binary<<endl;
}