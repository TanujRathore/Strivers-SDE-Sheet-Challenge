int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int i=1,j=0,count=1;
    int ans=1;
    while(i<n){
        if(at[i]<=dt[j]){
            count++;
            i++;
            ans=max(ans,count);
        }
        else{
            count--;
            j++;
        }
    }
    //return ans;
    return ans;
}