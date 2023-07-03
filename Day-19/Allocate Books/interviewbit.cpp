bool isvalid(vector<int>& A,int pages,int B,int n){
    int sum=0,cnt=0;
    
    for(int i=0;i<n;i++){
        if(sum+A[i]>pages){
            sum=A[i];
            cnt++;
            if(sum>pages) return false;
        }
        else{
            sum+=A[i];
        }
    }
    if(cnt<B) return true;
    return false;
}

int Solution::books(vector<int> &A, int B) {
    if(B>A.size()) return -1;
    int n=A.size();
    int low=A[0],high=0;
    
    for(int i=0;i<n;i++){
        high+=A[i];
        low=min(low,A[i]);
    }
    while(low<=high){
        int mid=low+(high-low)/2;
        if(isvalid(A,mid,B,n)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}