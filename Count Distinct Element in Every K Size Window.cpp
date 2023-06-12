#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    vector<int>ans;
    map<int,int>mp;
    for(int i=0;i<arr.size();i++)
    {
         if(i<k)
         {
            mp[arr[i]]++;
            if(i==k-1 && k==arr.size())
               {
                   ans.push_back(mp.size());
                   return ans;
               }
         }else{
            if(i==k)
            {
               ans.push_back(mp.size());
            }
            mp[arr[i]]++;
            mp[arr[i-k]]--;
            if(mp[arr[i-k]]==0)
            {
                mp.erase(arr[i-k]);
            }
            ans.push_back(mp.size());
         }
    }
    return ans;
}
