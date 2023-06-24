// User function template for C++

class Solution{
    private:
    void f(vector<vector<int>>& m,int n,int i,int j,string s,vector<vector<int>>& vis,vector<string>& res,
    vector<char>& ch,vector<int>& dx,vector<int>& dy){
        if(i>=n || i<0 || j>=n || j<0) return;
        if(i==n-1 && j==n-1){
            res.push_back(s);
            return;
        }
        for(int k=0;k<4;k++){
            if(i+dx[k]<=n-1 && i+dx[k]>=0 && j+dy[k]<=n-1 && j+dy[k]>=0 && vis[i+dx[k]][j+dy[k]]==0 && m[i+dx[k]][j+dy[k]]==1){
             //  cout<< m[i+dx[k]][j+dy[k]]<<"-"<<ch[k]<<"  ";
                vis[i][j]=1;
                s.push_back(ch[k]);
                f(m,n,i+dx[k],j+dy[k],s,vis,res,ch,dx,dy);
                s.pop_back();
                vis[i][j]=0;
            }
        }
    }
    public:
    vector<string> findPath(vector<vector<int>>& m, int n) {
      //  cout<<"yes";
        vector<string>res;
        vector<vector<int>>vis(n,vector<int>(n,0));
        vector<char>ch={'D','L','R','U'};
        vector<int>dx={+1,0,0,-1};
        vector<int>dy={0,-1,1,0};
        string s;
        if(m[0][0]==1) f(m,n,0,0,s,vis,res,ch,dx,dy);
       // cout<<res.size();
    //    for(auto it:res){
     //       cout<<it<<" ";
      //  }
        // Your code goes here
        return res;
    }
};

    