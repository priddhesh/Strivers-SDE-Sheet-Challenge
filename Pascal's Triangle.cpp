#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>>ans;
    for(int i=1;i<=n;i++)
    {
      vector<long long int>v;
      for(int j=1;j<=i;j++)
      {
        if(j==1 || j==i)
        {
          v.push_back(1);
        }else{
          long long int k = (long long int)ans[i-2][j-1]+(long long int)ans[i-2][j-2];
          v.push_back(k);
        }
      }
      ans.push_back(v);
    }
    return ans;
}
