// Given a string, write a program to count the number of vowels, consonants, and spaces in that string.



#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);

    int countVowel = 0,countConsonant = 0,countSpace = 0;
    for(int i = 0;i < str.length();i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') countVowel++;

        else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') countVowel++;

        else if(str[i] == ' ') countSpace++;
        else countConsonant++;
    }

    cout<<"No. of vowels : "<<countVowel<<endl;
    cout<<"No. of consonants : "<<countConsonant<<endl;
    cout<<"No. of space : "<<countSpace<<endl;
}