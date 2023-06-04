#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	map<int,int>mp;
	int m=0,r=0;
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
		if(mp[arr[i]]==2)
		{
			r = arr[i];
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(mp.find(i)==mp.end())
		{
			m = i;
		}
	}
	return {m,r};
}
