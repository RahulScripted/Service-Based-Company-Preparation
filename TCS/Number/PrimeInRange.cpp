// Given a and b, find prime numbers in a given range [a,b], (a and b are included here).



#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return true;
    for(int i = 2;i * i <= num;i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main(){
    int left,right;
    cout<<"Enter the left : ";
    cin>>left;
    cout<<"Enter the right : ";
    cin>>right;

    cout<<"prime numbers are : ";
    for(int i = left;i <= right;i++){
        if(isPrime(i)) cout<<i<<" ";
    }
}