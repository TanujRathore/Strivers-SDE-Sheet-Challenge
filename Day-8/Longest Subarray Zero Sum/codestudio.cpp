#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int n=arr.size();
  int maxi=0;
  for(int i=0;i<n;i++){
    int cost=0;
    for(int j=i;j<n;j++){
      cost+=arr[j];
      if(cost==0){
        maxi=max(maxi,j-i+1);
      }
    }
  }
  return maxi;

}