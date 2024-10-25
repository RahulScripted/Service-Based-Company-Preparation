// Given a positive integer, N. Find the factorial of N.




#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long int factorial(int N){
        // Recursive Approach
        // if(N == 1 || N == 0) return 1;
        // return N * factorial(N - 1);
        
        // Iterative Appproach
        long long ans = 1;
        for(int i = 1;i <= N;i++){
            ans *= i;
        }
        return ans;
    }
};

int main(){
    Solution solve;

    // 1st Example
    int N = 5;
    cout<<"Factorial of "<<N<<" will be : "<<solve.factorial(N)<<endl;

    // 2nd Example
    N = 7;
    cout<<"Factorial of "<<N<<" will be : "<<solve.factorial(N)<<endl;
}