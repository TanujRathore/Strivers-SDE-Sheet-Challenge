#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
        if(n==1) return {{1}};
        vector<vector<long long int>>pascal={{1},{1,1}};
        for(int i=2;i<n;i++){
            vector<long long int>ans;
            ans.push_back(1);
            for(int j=1;j<i;j++){
                ans.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
            }
            ans.push_back(1);
            pascal.push_back(ans);
        }
        return pascal;
}