#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
   double ans = 0;
   int k = 0,sum = 0;
   vector<pair<double,int>>v;
   for(int i=0;i<items.size();i++)
   {
       sum+=items[i].first;
       double k = (double)items[i].second/(double)items[i].first;
       v.push_back({k,i});
   }
   sort(v.rbegin(),v.rend());
   while(w!=0)
   {
      int idx = v[k].second;
      if(items[idx].first<=w)
      {
          ans+=(double)items[idx].second;
          w-=items[idx].first;
      }else{
          double ratio = (double)w/(double)items[idx].first;
          ans+= ratio*(double)items[idx].second;
          w = 0;
      }
      k++;
      if(k==v.size())
      {
          break;
      }
   }
   return ans;
}
