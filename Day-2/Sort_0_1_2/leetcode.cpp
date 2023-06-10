class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
       int red=0,white=0,blue=n-1;
   while(white<=blue){
      if(nums[white]==0){
         swap(nums[white],nums[red]);
         red++; // put red one index forward of 0.
         white++; // as after swap arr[white] becomes 1 according algorithm
      }
      else if(nums[white]==1){
         white++;  // put white one forward of 1
      }
      else{
         swap(nums[white],nums[blue]);
         blue--;  // put blue one back of 2.
      }
   } 
    }
};