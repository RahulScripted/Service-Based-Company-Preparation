// Write a program to identify if the number is Armstrong number or not



#include<iostream>
#include<math.h>
using namespace std;

int length(int num){
    int n = 0;
    while(num){
        n++;
        num /= 10;
    }
    return n;
}

int power(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int lengthOfNum = length(num);

    int armstrongValue = 0,temp = num;
    while(temp){
        int digit = (temp % 10);
        armstrongValue += power(digit,lengthOfNum);
        temp /= 10;
    }
    
    if(num == armstrongValue) cout<<num<<" is an armstrong number"<<endl;
    else cout<<num<<" is not an armstrong number"<<endl;
}