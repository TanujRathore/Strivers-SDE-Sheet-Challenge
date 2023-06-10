#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int red=0,white=0,blue=n-1;
   while(white<=blue){
      if(arr[white]==0){
         swap(arr[white],arr[red]);
         red++; // put red one index forward of 0.
         white++; // as after swap arr[white] becomes 1 according algorithm
      }
      else if(arr[white]==1){
         white++;  // put white one forward of 1
      }
      else{
         swap(arr[white],arr[blue]);
         blue--;  // put blue one back of 2.
      }
   }
   
}