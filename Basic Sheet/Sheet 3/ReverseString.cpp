// Write a Program to reverse a string.



#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverse_string(string str){
    string ans = "";
    for(int i = str.length() - 1;i >= 0;i--) ans += str[i];
    return ans;
}

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    cout<<"Original string : "<<str<<endl;

    // Using in-built reverse
    // reverse(str.begin(),str.end());
    // cout<<"Reverse string : "<<str<<endl;

    // Own function
    string reverse = reverse_string(str);
    cout<<"Reverse string : "<<reverse<<endl;
}