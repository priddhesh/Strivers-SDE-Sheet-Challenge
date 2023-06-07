#include <bits/stdc++.h> 

void solve(int i,vector<int>&k,vector<int>&v,vector<vector<int>>&ans)
{
    if(i==k.size())
    {
        ans.push_back(v);
        return;
    }
    v.push_back(k[i]);
    solve(i+1,k,v,ans);
    v.pop_back();
    solve(i+1,k,v,ans);
}
vector<vector<int>> pwset(vector<int>v)
{
    vector<int>k;
    vector<vector<int>>ans;
    solve(0,v,k,ans);
    return ans;
}
