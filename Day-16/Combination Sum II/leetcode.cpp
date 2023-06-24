class Solution {
private:
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
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>ds;
        f(candidates,0,n,target,ds,res);
        return res;
        
    }
};