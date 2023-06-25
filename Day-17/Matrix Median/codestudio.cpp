#include<bits/stdc++.h>

int f(vector<int>& v,int x){
    int l=0,r=v.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        
        if(v[mid]<=x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return l;
}

int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    int low=0,high=pow(10,9); 
    while(low<=high){
        int mid=low+(high-low)/2;
        int count=0;
        for(int i=0;i<n;i++){
            count+=f(matrix[i],mid);
        }
        if(count<=(n*m/2)){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}