#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
       // int n=nums.size();
        if (n == 0) {
            return 0;
        }

        sort(arr.begin(),arr.end());
        int longestStreak = 1;
        int currentStreak = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i-1]) {
                if (arr[i] == arr[i-1]+1) {
                    currentStreak += 1;
                }
                else {
                    longestStreak = max(longestStreak, currentStreak);
                    currentStreak = 1;
                }
            }
        }

        return max(longestStreak, currentStreak);
}