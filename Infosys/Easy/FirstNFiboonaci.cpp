// Given a number n, return a list containing the first n Fibonacci numbers.



#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<long long> printFibb(int n) {
        vector<long long>ans(n);
        ans[0] = 1;
        ans[1] = 1;
        for(int i = 2;i < n;i++){
            ans[i] = ans[i - 1] + ans[i - 2]; 
        }
        return ans;
    }
};

int main(){
    Solution solve;

    int n = 5;
    vector<long long> ans = solve.printFibb(n);
    cout<<"Fibonacci series : ";
    for(int i = 0;i < ans.size();i++) cout<<ans[i]<<" ";
}