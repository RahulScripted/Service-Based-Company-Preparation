// Given a sorted array arr. Return the size of the modified array which contains only distinct elements.





#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int remove_duplicate(vector<int> &arr) {
        int i=0;
        for(int j=1;j<arr.size();j++){\
            if(arr[j]!=arr[i]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
    }
};

int main(){
    Solution solve;

    vector<int>arr = {2, 2, 2, 2, 2};
    cout<<"The no. of unique elements are : "<<solve.remove_duplicate(arr);
}