class Solution {
// private:
//     long long C(int n, int k) {
//         long long int res = 1;
//         for (int i = n - k + 1; i <= n; ++i)
//             res *= i*1ll;
//         for (int i = 2; i <= k; ++i)
//             res /= i;
//         return res;
//     }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};