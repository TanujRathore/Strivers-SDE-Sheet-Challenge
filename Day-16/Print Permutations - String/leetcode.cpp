class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>store;
        sort(nums.begin(),nums.end());
        do{
            store.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
            
        return store;
        
    }
};