class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cost=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            cost=max(nums[i],cost+nums[i]);
            maxi=max(maxi,cost);
        }
        return maxi;
    }
};