class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        set<int>st;
        int store=0,cnt=0,maxi=INT_MIN;
        for(auto it:nums){
            st.insert(it);
        }
        for(auto it:st){
            if(st.count(it-1)==0){
            cnt=0;
//            auto it=st.begin()+i;
            store=it;
            while(st.count(store)>0){
                store+=1;
                cnt+=1;
            }
           // cout<<nums[i]<<"-"<<cnt<<" ";
            maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
};