#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	int pre = 1,suffix = 1,maxi = INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(pre==0)
		{
			pre = 1;
		}
		if(suffix == 0)
		{
			suffix = 1;
		}
		pre = pre*arr[i];
		suffix = suffix*arr[n-i-1];
		maxi = max(maxi,max(pre,suffix));
	}
	return maxi;
}
