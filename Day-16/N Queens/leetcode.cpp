class Solution {
private:
    bool valid(vector<string>& ds,int n,int row,int col){
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(ds[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
            if(ds[i][j]=='Q'){
                return false;
            }
        }
        for(int i=0;i!=row;i++){
            if(ds[i][col]=='Q'){
                return false;
            }
        }
        return true;
    }
private:
    void f(int row,int n,vector<string>& ds,vector<vector<string>>& res){
        if(row>=n){
            res.push_back(ds);
            return;
        }
        for(int col=0;col!=n;col++){
            if(valid(ds,n,row,col)){
                ds[row][col]='Q';
                f(row+1,n,ds,res);
                ds[row][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>res;
        vector<string>ds(n,string(n,'.'));
        f(0,n,ds,res);
        return res;
        
        
    }
};