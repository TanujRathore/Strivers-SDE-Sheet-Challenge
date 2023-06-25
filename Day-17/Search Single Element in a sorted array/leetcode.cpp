class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        if(n==1) return nums[0];
        while(low<=high){
            int mid=low+(high-low)/2;
            bool val=false;
            if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid%2==1 && nums[mid]==nums[mid-1])){
                low=mid+1;
                val=false;
            }
            else{
                high=mid-1;
                val=false;
            }
            if(val) return nums[low];
        }
        return nums[low];
        
    }
};