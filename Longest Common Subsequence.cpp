#include<bits/stdc++.h>

int findlcs(string X, string Y, int m, int n, vector<vector<int>>& dp)
{
    if (m < 0 || n < 0)
        return 0;
	if (dp[m][n] != -1) {
        return dp[m][n];
    }
	
    if (X[m] == Y[n])
        return dp[m][n] = 1 + findlcs(X, Y, m - 1, n - 1, dp);
    else{
      return dp[m][n] = max(findlcs(X, Y, m, n - 1, dp),findlcs(X, Y, m - 1, n, dp));
    }
}
 
int lcs(string s, string t)
{
    int n = s.size(),m = t.size();
	vector<vector<int>>dp(n,vector<int>(m,-1));
	return findlcs(s,t,n-1,m-1,dp);
}
