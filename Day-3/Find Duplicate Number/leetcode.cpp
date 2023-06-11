class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int tortoise=nums[0];
        int hare=nums[0];
        do{
            tortoise=nums[tortoise];
            hare=nums[nums[hare]];
        }while(tortoise!=hare);
        
        tortoise=nums[0];
        while(hare!=tortoise){
            //newhr=nums[newhr];
            tortoise=nums[tortoise];
            hare=nums[hare];
        }
        return hare;
        
        
    }
};