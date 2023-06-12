#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    if(str1.size()!=str2.size()) return false;
    unordered_map<char,int>mp;
    for(int i=0;i<str1.size();i++)
    {
        mp[str1[i]]++;
    }
    for(int i=0;i<str2.size();i++)
    {
        mp[str2[i]]--;
    }
    for(auto it:mp)
    {
        if(it.second!=0)
        {
            return false;
        }
    }
    return true;
}
