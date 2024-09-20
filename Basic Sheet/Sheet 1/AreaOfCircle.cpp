// Write a program to find Area of a circle


#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int radius;
    cout<<"Enter a radius : ";
    cin>>radius;
    float areaOfCircle = 3.14 * radius * radius;
    cout<<"Area of circle "<<"for radius "<<radius<<" will be : "<<areaOfCircle<<endl;
}