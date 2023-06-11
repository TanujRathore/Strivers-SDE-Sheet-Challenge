#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	//int n=nums.size();
        int tortoise=arr[0];
        int hare=arr[0];
        do{
            tortoise=arr[tortoise];
            hare=arr[arr[hare]];
        }while(tortoise!=hare);
        
        tortoise=arr[0];
        while(hare!=tortoise){
            //newhr=nums[newhr];
            tortoise=arr[tortoise];
            hare=arr[hare];
        }
        return hare;

}
