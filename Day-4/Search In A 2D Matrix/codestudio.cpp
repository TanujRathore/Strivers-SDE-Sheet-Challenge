bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        
        int l=0,r=m*n-1;
        while(l!=r){
            int mid=l+(r-l)/2;
            
            if(mat[mid/m][mid%m]<target){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return mat[r/m][r%m]==target;   
}