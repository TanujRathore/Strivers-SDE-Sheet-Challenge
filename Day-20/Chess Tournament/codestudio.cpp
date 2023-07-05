#include <bits/stdc++.h>

// int isvalid(vector<int>& p,int n,int c,int mid){
// 	int sum=0,cnt=0;
// 	for(int i=0;i<n;i++){
// 		if(sum+p[i]>mid){
// 			sum=p[i];
// 			cnt++;
// 			if(sum>mid) return false;
// 		}
// 		else{
// 			sum+=p[i];
// 		}
// 	}
// 	if(cnt<c) return true;
// 	return false;
// }
int chessTournament(vector<int> p , int n ,  int c){
	// Write your code here
	sort(p.begin(),p.end());
	int low=1,high=p[n-1];
	int ans=0;
	while(low<=high){
		int mid=low+(high-low)/2;

		int count=1,previous=p[0];
		for(int i=1;i<n;i++){
			if(p[i]-previous>=mid){
				previous=p[i];
				count++;
			}
		}
		if(count>=c){
			ans=mid;
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return ans;

}