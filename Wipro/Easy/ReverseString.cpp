// You are given a string s. You need to reverse the string.




#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string reverseString(string& s) {
        // Using in-build functions
        reverse(s.begin(),s.end());
        return s;
        
        // Without using inbuilt function
        // int left = 0,right = s.length() - 1;
        // while(left < right){
        //     char temp = s[left];
        //     s[left] = s[right];
        //     s[right] = temp;
        //     left++;
        //     right--;
        // }
        // return s;
        
        // By Using another string
        // string ans = "";
        // for(int i = s.length() - 1;i >= 0;i--) ans += s[i];
        // return ans;
    }
};

int main(){
    Solution solve;

    // 1st Example
    string s = "Geeks";
    cout<<"Reverse will be : "<<solve.reverseString(s)<<endl;

    // 2nd Example
    s = "Rahul";
    cout<<"Reverse will be : "<<solve.reverseString(s)<<endl;
}