//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    // double f(Item arr[],int ind,int w,int n){
        
    //     if(ind>=n || w<=0){
    //         if(w<0){
    //             double ans=(arr[ind-1].value-((arr[ind-1].value*(arr[ind-1].weight-w))/arr[ind-1].weight));
    //             cout<<ans<<endl;
    //             return ans;
    //         }
    //         return 0;
    //     }
    //     return max(arr[ind].value+f(arr,ind+1,w-arr[ind].weight,n),f(arr,ind+1,w,n));
         
    // }
    static bool comp(Item a,Item b){
        return (a.value/(a.weight*1.0)) > (b.value/(b.weight*1.0));
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        
        //return f(arr,0,W,n);
        sort(arr,arr+n,comp);
        double sum=0;
        
        for(int i=0;i<n;i++){
            if(W-arr[i].weight>=0){
                sum+=arr[i].value;
                W-=arr[i].weight;
            }
            else{
                sum+=W*(arr[i].value/(arr[i].weight*1.0));
                break;
            }
        }
        return sum;
        
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends