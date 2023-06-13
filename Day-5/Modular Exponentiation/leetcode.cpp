class Solution {
public:
    double myPow(double x, int n) {
        /*  if(n<0){
            n=-n;
            x=1/x;
        } */
        if(n==0) return 1;
        if(n<0){
            return (1/x)*myPow(1/x,-(n+1));
        }
        double ans=myPow(x,n/2);
        if(n%2==0){
            cout<<"even-"<<ans<<" ";
            return ans*ans;
        }else{
            cout<<"odd-"<<ans<<" ";
            return x*ans*ans;
        }
    }
};