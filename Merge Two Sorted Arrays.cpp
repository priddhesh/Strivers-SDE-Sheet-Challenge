#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	vector<int>arr;
	int a = 0,b=0;
	while(arr1[a]!=0 && b!=arr2.size())
	{
		if(arr1[a]<=arr2[b])
		{
			arr.push_back(arr1[a]);
			a++;
		}else{
			arr.push_back(arr2[b]);
			b++;
		}
	}
	while(arr1[a]!=0)
	{
		arr.push_back(arr1[a]);
		a++;
	}
	while(b!=arr2.size())
	{
		arr.push_back(arr2[b]);
		b++;
	}
	for(int i=0;i<arr.size();i++)
	{
		arr1[i]=arr[i];
	}
	return arr1;
}
