#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
    map<int,int>mpp;
    vector<int>ans;
    for(auto it:arr){
        mpp[it]++;
    }
    for(auto it:mpp){
        if(it.second>(n/3)){
            ans.push_back(it.first);
        }
    }
    return ans;

}