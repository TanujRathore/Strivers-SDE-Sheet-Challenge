#include <bits/stdc++.h>

// First appraoch is Subsequence. find all subsequence 
// and then check sum==target. 

int f(vector<int>& arr,int target,int n){

}
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    //int n=nums.size();
    vector<int>nums;
    for(auto it:arr){
        nums.push_back(it);
    }
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int p=0;p<n;p++){
            long long k=target-nums[p];
        for(int i=p+1;i<n;i++){
            long long ntarget=k-nums[i];
            int front=i+1;
            int back=n-1;
            
            while(front<back){
                int sum=nums[front]+nums[back];
                if(sum<ntarget){
                    front++;
                }
                else if(sum>ntarget){
                    back--;
                }
                else{
                    res.push_back({nums[p],nums[i],nums[front],nums[back]});
                    while(front<back && nums[front]==res.back()[2]){
                        front++;
                    }
                    while(front<back && nums[back]==res.back()[3]){
                        back--;
                    }
                }
            }
            while(i+1<n && nums[i+1]==nums[i]){
                i++;
            }
        }
            while(p+1<n && nums[p+1]==nums[p]){
                p++;
            }
        }
        //return res;
        return res.size()>0 ? "Yes" : "No";
    
}
