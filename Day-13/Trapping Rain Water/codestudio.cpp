#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
        //int n=arr.size(); 
        long ans=0;
        vector<long>leftmax(n,0),rightmax(n,0);
        leftmax[0]=arr[0];
        for(int i=1;i<n;i++){
            leftmax[i]=max(arr[i],leftmax[i-1]);
        }
        rightmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(arr[i],rightmax[i+1]);
        }
        for(int i=0;i<n;i++){
            ans+=min(leftmax[i],rightmax[i])-arr[i];
        }
        return ans;
        
}