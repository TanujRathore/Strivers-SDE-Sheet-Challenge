#include <bits/stdc++.h> 


int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
       int n=jobs.size();
       sort(jobs.begin(),jobs.end(),[&](vector<int>& a,vector<int>& b){
            // if(a.profit==b.profit){
            //     return a.dead<b.dead;
            // }
            return a[1]>b[1];
        });
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(jobs[i][0],maxi);
        }
        
        vector<int>res(maxi+1,-1);
        
        int countjob=0,maxprofit=0;
        for(int i=0;i<n;i++){
            for(int j=jobs[i][0];j>0;j--){
                if(res[j]==-1){
                    res[j]=i;
                    countjob++;
                    maxprofit+=jobs[i][1];
                    break;
                }
            }
        }
        return maxprofit;
        
}
