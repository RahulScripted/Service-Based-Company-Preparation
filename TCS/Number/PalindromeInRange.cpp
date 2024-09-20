// Find all Palindrome numbers in a given range



#include<iostream>
using namespace std;

bool isPalindrome(int num){
    int temp = num,ans = 0;
    while(temp != 0){
        int digit = (temp % 10);
        ans = (ans * 10) + digit;
        temp /= 10;
    }
    return num == ans;
}

int main(){
    int left,right;
    cout<<"Enter the left : ";
    cin>>left;
    cout<<"Enter the right : ";
    cin>>right;

    cout<<"Palindrome numbers are : ";
    for(int i = left;i <= right;i++){
        if(isPalindrome(i)) cout<<i<<" ";
    }
}