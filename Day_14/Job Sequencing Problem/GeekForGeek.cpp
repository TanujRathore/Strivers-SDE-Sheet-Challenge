class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,[&](Job a,Job b){
            // if(a.profit==b.profit){
            //     return a.dead<b.dead;
            // }
            return a.profit>b.profit;
        });
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(arr[i].dead,maxi);
        }
        
        vector<int>res(maxi+1,-1);
        
        int countjob=0,maxprofit=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(res[j]==-1){
                    res[j]=i;
                    countjob++;
                    maxprofit+=arr[i].profit;
                    break;
                }
            }
        }
        return {countjob,maxprofit};
        
        
    } 
};