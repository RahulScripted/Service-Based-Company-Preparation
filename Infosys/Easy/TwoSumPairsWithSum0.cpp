// Given an integer array arr, return all the unique pairs [arr[i], arr[j]] such that i != j and arr[i] + arr[j] == 0.





#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        set<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int i=0;
        int j=n-1;
        
        while(i<j){
            int sum = arr[i]+arr[j];
            if(sum==0) {
                ans.insert({arr[i],arr[j]});
                i++;
                j--;
            }
            else if(sum < 0) i++;
            else j--;
        }
        
        vector<vector<int>>res(ans.begin(),ans.end());
        return res;
    }
};

int main(){
    Solution solve;

    vector<int>arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>>ans = solve.getPairs(arr);
    cout<<"Pairs are : "<<endl;
    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}