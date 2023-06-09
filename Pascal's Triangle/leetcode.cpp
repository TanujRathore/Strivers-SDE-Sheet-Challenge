class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1) return {{1}};
        vector<vector<int>>pascal={{1},{1,1}};
        for(int i=2;i<numRows;i++){
            vector<int>ans;
            ans.push_back(1);
            for(int j=1;j<i;j++){
                ans.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
            }
            ans.push_back(1);
            pascal.push_back(ans);
        }
        return pascal;
    }
};