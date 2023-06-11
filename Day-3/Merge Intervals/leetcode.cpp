class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>merged;
        for(int i=0;i<n;i++){
            if(merged.empty() || merged.back()[1]<intervals[i][0]){
                merged.push_back(intervals[i]);
            }
            else{
                merged.back()[1]=max(merged.back()[1],intervals[i][1]);
            }
        }
        return merged;
        
    }
};