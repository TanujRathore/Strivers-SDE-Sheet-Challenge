class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>fac(n+1,1);
        string s="";
        fac[0]=1; int sum=1;
        for(int i=1;i<=n;i++){
            sum*=i;
            fac[i]=sum;
        }
        vector<int>num;
        for(int i=1;i<=n;i++){
            num.push_back(i);
        }
        k--;
        for(int i=1;i<=n;i++){
            int ind=k/fac[n-i];
            s+=to_string(num[ind]);
            num.erase(num.begin()+ind);
            k-=(ind*fac[n-i]);
        }
        return s;
    }
};