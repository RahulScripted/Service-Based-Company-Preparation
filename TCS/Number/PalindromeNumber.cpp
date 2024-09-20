// Given an integer N, return true if it is a palindrome else return false.



#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int temp = num,palindrome = 0;
    while(temp != 0){
        int digit = (temp % 10);
        palindrome = (palindrome * 10) + digit;
        temp /= 10;
    }
    if(palindrome == num) cout<<num<<" is a palindrome number"<<endl;
    else cout<<num<<" is not a palindrome number"<<endl;
}