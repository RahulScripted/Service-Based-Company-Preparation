// Write a Program to concatenate a string.


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1,str2;
    cout<<"Enter first string : ";
    getline(cin,str1);

    cout<<"Enter second string : ";
    getline(cin,str2);
    
    cout<<"First string : "<<str1<<endl;
    cout<<"Second string : "<<str2<<endl;

    cout<<"After concatenating : "<<str1 + " " + str2<<endl;
}