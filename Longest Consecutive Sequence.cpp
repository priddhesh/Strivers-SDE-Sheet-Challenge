#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    if(n==0) return 0;
    int longest = 1;
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }

    for(auto it:s)
    {
        int cnt = 0;
        if(s.find(it-1)==s.end())
        {
            cnt = 1;
            int x = it;
            while(s.find(x+1)!=s.end())
            {
                x++;
                cnt++;
            }
            longest = max(longest,cnt);
        }
    }
    return longest;
}
