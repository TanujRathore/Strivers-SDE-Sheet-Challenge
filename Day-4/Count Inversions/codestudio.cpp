#include <bits/stdc++.h> 
int merge(long long *arr,int start,int end){
    long long inv=0;

    int mid=start+(end-start)/2;

    int len1=mid-start+1;
    int len2=end-mid;

    int*first=new int[len1];
    int *second=new int[len2];

    int ind=start;

    for(int i=0;i<len1;i++){
        first[i]=arr[ind++];
    }

    ind=mid+1;

    for(int i=0;i<len2;i++){
        second[i]=arr[ind++];
    }

    // merge 2 sorted array

    int i=0,j=0;
    ind=start;
    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            arr[ind++]=first[i++];
        }
        else{
            arr[ind++]=second[j++];
            inv+=len1-i;
        }
    }

    while(i<len1){
        arr[ind++]=first[i++];
    }

    while(j<len2){
        arr[ind++]=second[j++];
    }

    // deleting dynamically arrays

    return inv;
}
int mergesort(long long *arr,int start,int end){
    long long inv=0;

    if(start>=end){
        return inv;
    }

    int mid=start+(end-start)/2;

    inv+=mergesort(arr,start,mid);

    inv+=mergesort(arr,mid+1,end);

    inv+=merge(arr,start,end);

    return inv;

}
long long getInversions(long long *arr, int n){
    // Write your code here.
    //int n=arr.size();
    //int n=arr.size();
    return mergesort(arr,0,n-1);

}