class Solution {
private:
    int count(vector<int>& nums,int num,int l,int h){
        int cnt=0;
        
        for(int i=l;i<=h;i++){
            if(nums[i]==num){
                cnt++;
            }
        }
        return cnt;
    }
private:
    int f(vector<int>& nums,int l,int h){
        if(l>=h){
            return nums[l];
        }
        int mid=l+(h-l)/2;
        
        int left=f(nums,l,mid);
        int right=f(nums,mid+1,h);
        
        if(left==right){
            return left;
        }
        
        int leftcount=count(nums,left,l,h);
        int rightcount=count(nums,right,l,h);
        
        return leftcount>rightcount ? left : right;
    }
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        return f(nums,0,n-1);
    }
};