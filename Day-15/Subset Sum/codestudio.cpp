#include<bits/stdc++.h>
void subSet(int sum,int ind,vector<int>& arr,int n,vector<int>& ans){
        if(ind>=n){
            ans.push_back(sum);
            return;
        }
        subSet(sum+arr[ind],ind+1,arr,n,ans);
        subSet(sum,ind+1,arr,n,ans);
}
vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	    vector<int>ans;
        int N=num.size();
        subSet(0,0,num,N,ans);
        sort(ans.begin(),ans.end());
        return ans;	
}