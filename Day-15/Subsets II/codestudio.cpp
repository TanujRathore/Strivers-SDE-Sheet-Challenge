#include <bits/stdc++.h> 
 void f(vector<int>& nums,int ind,int n,vector<int>& ds,
          vector<vector<int>>& res){
        res.push_back(ds);
        for(int i=ind;i<n;i++){
            if(i!=ind && i>0 && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            f(nums,i+1,n,ds,res);
            ds.pop_back();
        }
        
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
        //int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>res;
        vector<int>ds;
        f(arr,0,n,ds,res);
        return res;
}