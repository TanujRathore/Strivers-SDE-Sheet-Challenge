#include <bits/stdc++.h> 

int mergeSort(vector<int>& nums, int s, int e){
        if(s>=e) return 0; 
        int mid = s + (e-s)/2; 
        int cnt = mergeSort(nums, s, mid) + mergeSort(nums, mid+1, e); 
        for(int i = s, j = mid+1; i<=mid; i++){
            while(j<=e && nums[i]/2.0 > nums[j]) j++; 
            cnt += j-(mid+1); 
        }
        //Arrays.sort(nums, s, e+1); 
        sort(nums.begin()+s,nums.begin()+e+1);  // Refer discussion form for this
        return cnt; 
    }
int reversePairs(vector<int> &arr, int n){
	// Write your code here.
	//int n=arr.size();
	return mergeSort(arr,0,n-1);	
}