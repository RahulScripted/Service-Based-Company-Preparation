// Write a Program to Remove vowels from a string



#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);

    string ans = "";
    for(int i = 0;i < str.length();i++){
        if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i' || str[i] == 'o'|| str[i] == 'u') continue;
        
        else if(str[i] == 'A' || str[i] == 'E'|| str[i] == 'I' || str[i] == 'O'|| str[i] == 'U') continue;
        
        else ans += str[i];
    }

    cout<<"Our string : "<<str<<endl;
    cout<<"After removing vowel from string : "<<ans<<endl;
}