int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	    //int n=arr.size(); 
        int unique=1;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                arr[unique++]=arr[i];
            }
        }
        return unique;
        
}