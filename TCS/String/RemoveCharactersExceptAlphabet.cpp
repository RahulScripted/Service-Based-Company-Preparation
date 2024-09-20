// Write a program to remove all characters from a string except alphabets in a given string.



#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);

    string ans = "";
    for(int i = 0;i < str.length();i++){
        if(str[i] >= 'a' && str[i] <= 'z') ans += str[i];
        else if(str[i] >= 'A' && str[i] <= 'Z') ans += str[i];
    }
    cout<<"After removing all characters from a string except alphabets : "<<ans<<endl;
}