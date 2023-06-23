#include <bits/stdc++.h> 

int findMinimumCoins(int amount) 
{
    // Write your code here
   int arr[9]={1,2,5,10,20,50,100,500,1000};
   int count=0;
   int number =0;
   for (int i=8;i>=0;i--)
   {
       if(arr[i]<=amount)
       {
           number=amount/arr[i];
           count+=number;
           amount-=(number*arr[i]);
       }
       if(amount==0)
       break;
   }
   return count;
}
