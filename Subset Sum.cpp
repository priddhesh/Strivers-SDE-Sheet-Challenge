#include <bits/stdc++.h> 
void solve(int index,vector<int>&nums,vector<int>&v,int &sum)
{
    v.push_back(sum);
    for (int i = index; i < nums.size(); i++) {
 
        sum+=nums[i];
 
        solve(i+1,nums,v,sum);

        sum-=nums[i];
    }
 
    return;
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int>sum;
    int ans = 0;
    solve(0,num,sum,ans);
    sort(sum.begin(),sum.end());
    return sum;
}
