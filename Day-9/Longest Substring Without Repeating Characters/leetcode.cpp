class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        map<int,int>mpp; int j=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(mpp.find(s[i])!=mpp.end()){
                j=max(j,mpp[s[i]]+1);
            }
            mpp[s[i]]=i;
            maxi=max(maxi,i-j+1);
        }
        return maxi;
        
    }
};