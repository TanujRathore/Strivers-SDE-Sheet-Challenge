class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    // Write your code here.
    int n=nums.size();
    map<int,int>mpp;
    vector<int>ans;
    for(auto it:nums){
        mpp[it]++;
    }
    for(auto it:mpp){
        if(it.second>(n/3)){
            ans.push_back(it.first);
        }
    }
    return ans;

}
};