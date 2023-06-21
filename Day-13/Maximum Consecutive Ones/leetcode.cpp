class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=0,count=0;
        for(int i=0;i<n;i++){
            int count=0;
            while(i<n && nums[i]==1){
                i++;
                count++;
            }
            maxi=max(maxi,count);
        }
        return maxi;
        
    }
};