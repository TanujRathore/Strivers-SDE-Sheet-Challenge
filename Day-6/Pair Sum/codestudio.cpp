#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
sort(arr.begin(),arr.end());

vector<vector<int>> ans;

 

for(int i = 0;i< arr.size();i++){

int x = arr[i];

 

for(int j = i+1;j< arr.size();j++){

if(x + arr[j] == s){

vector<int> a;

a.push_back(x);

a.push_back(arr[j]);

ans.push_back(a);

}

}

 

}

return ans;

}