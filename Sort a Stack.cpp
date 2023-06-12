#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	vector<int>v;
	int k = stack.size(),i=0;
	while(!stack.empty())
	{
		int k = stack.top();
		v.push_back(k);
		stack.pop();
	}
	sort(v.begin(),v.end());
	while(k!=0)
	{
       stack.push(v[i]);
	   i++;
       k--;
	}
	return;
}
