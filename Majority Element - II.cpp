#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    map<int,int>mp,m;
    vector<int>v;
    for(int i=0;i<arr.size();i++)
    {
        mp[arr[i]]++;
        if(mp[arr[i]]>arr.size()/3 && m[arr[i]]!=1)
        {
            v.push_back(arr[i]); 
            m[arr[i]]=1;
        }
    }
    return v;
}
