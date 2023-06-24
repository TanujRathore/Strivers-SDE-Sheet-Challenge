class Solution {
private:
    int issafe(string & s,int start,int end){
        while(start<=end){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
private:
    void f(string s,int ind,vector<string>& ds,vector<vector<string>>& res,vector<vector<bool>>& dp){
        if(ind>=s.size()) {
            res.push_back(ds);
            return;
        }
        
        for(int i=ind;i<s.size();i++){
            if(issafe(s,ind,i) &&(i-ind<=2 || dp[ind+1][i-1])){
                dp[ind][i]=true;
                ds.push_back(s.substr(ind,i-ind+1));
                f(s,i+1,ds,res,dp);
                ds.pop_back(); 
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<string>ds;
        vector<vector<string>>res;
        vector<vector<bool>>dp(n+1,vector<bool>(n+1,false));
        f(s,0,ds,res,dp);
        return res;
    }
};