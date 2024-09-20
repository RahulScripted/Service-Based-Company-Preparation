// Convert a binary number to a decimal number.



#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a binary number : ";
    cin>>num;
    int decimal = 0,base = 1;
    while(num > 0){
        int digit = (num % 10);
        decimal += digit * base;
        base *= 2;
        num /= 10;
    }
    cout<<"In decimal value : "<<decimal<<endl;
}