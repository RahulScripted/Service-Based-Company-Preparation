// Write a program to identify if the character is an alphabet or not



#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z') cout<<ch<<" is a alphabet"<<endl;
    else if(ch >= 'A' && ch <= 'Z') cout<<ch<<" is a alphabet"<<endl;
    else cout<<ch<<" is not a alphabet"<<endl;
}