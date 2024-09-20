// Check if a given string is palindrome or not



#include<iostream>
#include<string>
using namespace std;

bool isPalindromeCheck(string str){
    int left = 0,right = str.length() - 1;
    while(left < right){
        if(!isalnum(str[left])) left++;

        else if(!isalnum(str[right])) right--;
        
        else if(tolower(str[left]) != tolower(str[right])) return false;
        
        else{
            left++;
            right--;
        }
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);

    if(isPalindromeCheck(str)) cout<<str<<" is a palindrome"<<endl;
    else cout<<str<<" is not a palindrome"<<endl;
}