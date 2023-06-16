class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            int target=-nums[i];
            int front=i+1;
            int back=n-1;
            
            while(front<back){
                int sum=nums[front]+nums[back];
                if(sum<target){
                    front++;
                }
                else if(sum>target){
                    back--;
                }
                else{
                    res.push_back({nums[i],nums[front],nums[back]});
                    while(front<back && nums[front]==res.back()[1]){
                        front++;
                    }
                    while(front<back && nums[back]==res.back()[2]){
                        back--;
                    }
                }
            }
            while(i+1<n && nums[i+1]==nums[i]){
                i++;
            }
        }
        return res;
        
    }
};