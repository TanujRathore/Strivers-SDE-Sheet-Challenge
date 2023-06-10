class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int left=0,right=1,maxi=INT_MIN;
        while(right<n){
            int cost=prices[right]-prices[left];
            if(cost>0){
                maxi=max(maxi,cost);
            }
            else{
                left=right;
            }
            right++;
        }
        return maxi<0 ? 0 : maxi;
        
    }
};