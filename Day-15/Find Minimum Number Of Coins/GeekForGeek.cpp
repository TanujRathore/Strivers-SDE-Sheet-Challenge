//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int f(int coins[],int ind,int m,int v,vector<vector<int>>& dp){
	    if(ind>=m || v<0){
	        return 1e8;
	    }
	    if(v==0){
	        return 0;
	    }
	    if(dp[ind][v]!=-1) return dp[ind][v];
	    return dp[ind][v]=min(f(coins,ind,m,v-coins[ind],dp)+1,f(coins,ind+1,m,v,dp));
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<int>>dp(M,vector<int>(V+1,-1));
	    int ans=f(coins,0,M,V,dp);
	    if(ans==1e8) return -1;
	    return ans;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends