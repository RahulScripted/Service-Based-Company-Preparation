// Write a program to find Area of a Triangle



#include<iostream>
using namespace std;

int main(){
    int length,height;
    cout<<"Enter length of the rectangle : ";
    cin>>length;

    cout<<"Enter height of the rectangle : ";
    cin>>height;
    
    float areaOfTriangle = 0.5 * length * height;

    cout<<"Area of triangle "<<"for length "<<length<<" and height "<<height<<" will be : "<<(areaOfTriangle)<<endl;
}