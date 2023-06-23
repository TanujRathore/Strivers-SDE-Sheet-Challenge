#include <bits/stdc++.h> 
static bool comp(pair<int,int> a,pair<int,int> b){
    return (a.second/(a.first*1.0)) > (b.second/(b.first*1.0));
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
        sort(items.begin(),items.end(),comp);
        double sum=0;
        int W=w;
        for(int i=0;i<n;i++){
            if(W-items[i].first>=0){
                sum+=items[i].second;
                W-=items[i].first;
            }
            else{
                sum+=W*(items[i].second/(items[i].first*1.0));
                break;
            }
        }
        return sum;
}