// Swap given two numbers and print them. (Try to do it without a temporary variable.) and return it.




#include<bits/stdc++.h>
using namespace std;


class Solution{   
public:
    pair<int, int> get(int a, int b){
        // Using Swap Function
        // swap(a,b);
        // return {a,b};
        
        // Without using any in-built function
        a += b;
        b = a - b;
        a -= b;
        return {a,b};
    }
};

int main(){
    Solution solve;

    int a = 9,b = 13;
    cout<<"Before Swapping : ";
    cout<<"a -> "<<a<<" | "<<"b -> "<<b<<endl;

    cout<<"After Swapping : ";
    cout<<"a -> "<<solve.get(a,b).first<<" | "<<"b -> "<<solve.get(a,b).second<<endl;
}