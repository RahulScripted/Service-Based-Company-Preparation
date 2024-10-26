// Given an input stream s consisting only of lower case alphabets. While reading characters from the stream, you have to tell which character has appeared only once in the stream upto that point. If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear. If there is no such character then append '#' to the answer.





#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		string FirstNonRepeating(string A){
		    unordered_map<char, int> count;
            queue<int> q;
            string ans = "";
            
            for(int i = 0; i < A.length(); i++) {
                char ch = A[i];
                count[ch]++;
                q.push(ch);
                
                while(!q.empty()) {
                    if(count[q.front()] > 1) q.pop();
                    else {
                        ans.push_back(q.front());
                        break;
                    }
                }
                
                if(q.empty()) ans.push_back('#');
            }
            return ans;
		}

};

int main(){
    Solution solve;

    string A = "aabc";
    cout<<"Now String : "<<solve.FirstNonRepeating(A);
}