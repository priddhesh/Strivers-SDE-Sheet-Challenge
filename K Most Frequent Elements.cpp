#include <bits/stdc++.h> 

vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    map<int,int>mp;
    vector<pair<int,int>>v;
    vector<int>ans;
    for(int i=0;i<arr.size();i++)
    {
       mp[arr[i]]++;
    }
    for(auto it:mp)
    {
        v.push_back({it.second,it.first});
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<k;i++)
    {
        ans.push_back(v[i].second);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
