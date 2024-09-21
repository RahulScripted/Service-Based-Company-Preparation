// Write a Program to copy a string.



#include<iostream>
#include<string>
using namespace std;

string copy_string(string str){
    string ans = "";
    for(int i = 0;i < str.length();i++) ans += str[i];
    return ans;
}

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);

    string copy = copy_string(str);
    cout<<"Original string : "<<str<<endl;
    cout<<"Copied string : "<<copy<<endl;
}