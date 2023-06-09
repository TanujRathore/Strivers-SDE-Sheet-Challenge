#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    //int n=arr.size();
    long long cost=0;
    long long maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cost += arr[i];

        if(cost < 0){
            cost = 0;
        }
        
        maxi = max(maxi, cost);
    }
    return maxi == 0 ? 0 : maxi;

}