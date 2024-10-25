// You are given an array arr. You need to print elements of arr in alternate order (starting from index 0).




#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void print(vector<int> &arr) {
        int n = arr.size();
        for(int i = 0;i < n;i++){
            if(i % 2 == 0) cout<<arr[i]<<" ";
        }
    }
};

int main(){
    Solution solve;

    // 1st Example
    vector<int>arr = {1,2,3,4,5};
    cout<<"Alternate value : ";
    solve.print(arr);
}