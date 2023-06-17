#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int n=input.size();
        map<int,int>mpp; int j=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(mpp.find(input[i])!=mpp.end()){
                j=max(j,mpp[input[i]]+1);
            }
            mpp[input[i]]=i;
            maxi=max(maxi,i-j+1);
        }
        return maxi;
        
}