class Solution {
private:
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
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>ds;
        f(nums,0,n,ds,res);
        return res;
    }
};