#include <bits/stdc++.h>

long long f(long long x,long long n,int m){
	int ans = 1;

    x = x % m;

    while(n > 0){
        if(n % 2 == 1){
            ans = (ans * x) % m;
            n = n - 1;
        }
        x = (x * x) % m; 
        n = n / 2;
    }
    return ans;

}

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	return (int)f(x,n,m);
}