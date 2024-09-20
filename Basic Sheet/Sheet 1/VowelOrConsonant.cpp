// Write a program to identify if the character is a vowel or consonant



#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') cout<<ch<<" is a vowel"<<endl;
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') cout<<ch<<" is a vowel"<<endl;
    else cout<<ch<<" is a consonant"<<endl;
}