// Write a program to identify if the number is Perfect number or not



#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int perfect = 0;
    for(int i = 1;i < num;i++){
        if(num % i == 0) perfect += i;
    }
    
    if(num == perfect) cout<<num<<" is a perfect number"<<endl;
    else cout<<num<<" is not a perfect number"<<endl;
}