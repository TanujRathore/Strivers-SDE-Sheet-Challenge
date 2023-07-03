bool ispossible(vector<int>& A,int n,int cow,int minidist){
    int k=A[0],countcow=1;
    for(int i=1;i<n;i++){
        if(A[i]-k>=minidist){
            countcow++;
            k=A[i];

        }
    }
    if(countcow>=cow) return true;
    return false;
    
}


int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());

    int low=1,high=stalls[n-1]-stalls[0];
    while(low<=high){
        int mid=low+(high-low)/2;

        if(ispossible(stalls,n,k,mid)){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}