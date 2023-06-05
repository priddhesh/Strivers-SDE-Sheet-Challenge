#include <bits/stdc++.h> 
int distinctSubstring(string &word) {
    set<string>st;
    int cnt = 0;
    for(int i=0;i<word.size();i++)
    {
        string str = "";
        for(int j = i;j<word.size();j++)
        {
           str+=word[j];
           if(st.find(str)==st.end())
           {
               cnt++;
               st.insert(str);
           }
        }
    }
    return cnt;
}
