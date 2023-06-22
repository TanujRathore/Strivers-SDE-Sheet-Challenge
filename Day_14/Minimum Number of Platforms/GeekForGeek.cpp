//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    static bool compare(pair<int,int>&p1,pair<int,int>&p2){
        if(p1.second<p2.second) return true;
        if(p1.second>p2.second) return false;
        return p1.first<p2.first;
    }
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    // 	vector<pair<int,int>>vec;
    // 	for(int i=0;i<n;i++){
    // 	    vec.push_back({arr[i],dep[i]});
    // 	}
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1,j=0,count=1;
    int ans=1;
    while(i<n){
        if(arr[i]<=dep[j]){
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
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends