// Write a Program to compare two strings.



#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1,str2;
    cout<<"Enter first string : ";
    getline(cin,str1);

    cout<<"Enter second string : ";
    getline(cin,str2);

    for(int i = 0;i < min(str1.length(),str2.length());i++){
        if(str1[i] == str2[i]) cout<<str1[i]<<" matches "<<str2[i]<<endl;
        else cout<<str1[i]<<" doesn't matches "<<str2[i]<<endl;
    }
}