int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int n=arr.size();
        int low=0,high=n-1;
        if(n==1) return arr[0];
        while(low<=high){
            int mid=low+(high-low)/2;
            bool val=false;
            if((mid%2==0 && arr[mid]==arr[mid+1]) || (mid%2==1 && arr[mid]==arr[mid-1])){
                low=mid+1;
                val=false;
            }
            else{
                high=mid-1;
                val=false;
            }
            if(val) return arr[low];
        }
    return arr[low];
}