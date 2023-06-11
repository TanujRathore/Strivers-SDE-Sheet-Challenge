#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
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