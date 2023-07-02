int search(int* arr, int n, int key) {
    // Write your code here.
        //int n=nums.size();
        int target=key;
        int low=0,high=n-1;
        while(low<high){
            int mid=(high+low)/2;
            if(arr[mid]>arr[high]){
                low=mid+1;
            }
            else high=mid;
        }
        int rot=low;
        low=0,high=n-1;
        
        while(low<=high){
            int mid=(high+low)/2;
            int realmid=(mid+rot)%n;
            if(arr[realmid]>target){
                high=mid-1;
            }
            else if(arr[realmid]<target){
                low=mid+1;
            }
            else{
                return realmid;
            }
            
        }
        return -1;
        
}