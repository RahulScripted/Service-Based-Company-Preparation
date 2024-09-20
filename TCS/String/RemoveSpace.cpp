// Given a string, write a program to remove all the whitespaces from the string.



#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);

    string ans = "";
    for(int i = 0;i < str.length();i++){
        if(str[i] == ' ') continue;
        else ans += str[i];
    }
    cout<<"After removing all the whitespaces : "<<ans<<endl;
}