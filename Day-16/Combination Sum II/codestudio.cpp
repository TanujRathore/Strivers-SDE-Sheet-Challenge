#include<bits/stdc++.h>

void f(vector<int>& nums,int ind,int n,int target,vector<int>& ds,vector<vector<int>>& res){
        // if(ind>=n || target<0){
        //     return;
        // }
        if(target==0){
            //ds.pop_back();
            res.push_back(ds);
            return;
        }
        for(int i=ind;i<n;i++){
            if(i>ind && i>0 && nums[i]==nums[i-1]) continue;
            if(target-nums[i]<0) break;
            ds.push_back(nums[i]);
            f(nums,i+1,n,target-nums[i],ds,res);
            ds.pop_back();
        }
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	// Write your code here.
	//int n=candidates.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>res;
        vector<int>ds;
        f(arr,0,n,target,ds,res);
        return res;
}
