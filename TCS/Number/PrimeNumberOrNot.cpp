// Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.



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
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    if(isPrime(num)) cout<<num<<" is a prime number"<<endl;
    else cout<<num<<" is not a prime number"<<endl;
}