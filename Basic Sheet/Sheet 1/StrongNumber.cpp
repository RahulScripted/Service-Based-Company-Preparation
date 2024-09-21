// Write a program to identify if the number is Strong number or not



#include<iostream>
using namespace std;

int fact(int num){
    if(num == 0) return 1;
    return num * fact(num - 1);
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int strongNumber = 0,temp = num;
    while(temp){
        int digit = (temp % 10);
        strongNumber += fact(digit);
        temp /= 10;
    }
    
    if(num == strongNumber) cout<<num<<" is a strong number"<<endl;
    else cout<<num<<" is not a strong number"<<endl;
}