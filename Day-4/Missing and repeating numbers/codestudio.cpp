#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here
	//int n=arr.size();
	int i=0;
	while(i<n){
		if(i+1!=arr[i]){
			if(arr[i]!=arr[arr[i]-1]){
				std::swap(arr[i],arr[arr[i]-1]);
			}else{
				i++;
			}
		}
		else{
			i++;
		}
	} 
	for(int i=0;i<n;i++){
		if(i+1!=arr[i]){
			//cout<<i+1<<"-"<<arr[i]<<" ";
			return {i+1,arr[i]};
		}
	}
	return {-1,-1};
	
}
