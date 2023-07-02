class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>ans(m+n,0);
        int i=n-1;
        int j=m-1;
        int k=m+n-1;
        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j]){
                ans[k--]=nums1[i--];
            }
            else{
                ans[k--]=nums2[j--];
            }
            //cout<<i<<"-"<<j<<" ";
        }
        while(i>=0 && k>=0){
            ans[k--]=nums1[i--];
        }
        cout<<"yes";
        int mid=(m+n)/2;
        if((m+n)%2==0){
            cout<<"even ";
            cout<<(ans[mid]+ans[mid-1]);
            return (ans[mid]+ans[mid-1])*1.0/2;
        }
        else{
            cout<<"odd";
            return ans[mid];
        }
    }
};