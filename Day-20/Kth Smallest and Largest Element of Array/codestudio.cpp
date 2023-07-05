#include<bits/stdc++.h>
// TC: O(n) - avg and best case
// TC: O(n*n) - worst case
int quick_sel(int l, int r, vector<int> &arr, int k){
    int pivot = arr[r];
    int p = l;
    for(int i=l;i<r;i++)
        if(arr[i] <= pivot){
            swap(arr[i], arr[p]);
            p++;
        }
    swap(arr[p], arr[r]);
    
    if(p == k)    return arr[p];
    else if(p<k)    return quick_sel(p+1, r, arr, k);
    else        return quick_sel(l, p-1, arr, k);
}
vector<int> kthSmallLarge(vector<int> &arr, int n, int k){
    int large = n - k;
    int small = k - 1;
    
    int ans_min = quick_sel(0, n-1, arr, small);
    int ans_max = quick_sel(0, n-1, arr, large);
    
    return {ans_min, ans_max};
    
    
    // TC: O(nlogn)
    //sort(arr.begin(), arr.end());
    //return {arr[k-1], arr[n-k]};
    
    // TC: O(k + (n-k)*logk)    SC: O(k)
	/*priority_queue<int>maxh;
    priority_queue<int,vector<int>,greater<int>>minh;
    
    for(int i=0;i<n;i++){
        maxh.push(arr[i]);
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    
    for(int i=0;i<n;i++){
        minh.push(arr[i]);
        if(minh.size()>k){
            minh.pop();
        }
    }
    
    return {maxh.top(), minh.top()};*/
}